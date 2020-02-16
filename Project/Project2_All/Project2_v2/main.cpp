/*
Alex Carter 
2/14/2020

Project 2 - BlackJack Revised

V2:
 - Keeps Score for all games via 2d Array
 - Keep Round Histroy for each player
 - Display Round History at the end of the game
*/

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <time.h>


// Simple to define to make life easy
#define hand_ref short (&hand)[6]

struct player {
    bool isAi = true;
    bool isStay;
    bool isBust = false;
    short plydGms = 0;
    short stats [10][2]; // First Index is game # (max of 10), second index is array of stats (0 - result, 1 - score at this point)
    short score = 0;
    std::string name = "AI Player";
    short hand[6] = {0, 0, 0, 0,0,0}; // TODO: Convert to vector
};
// Game Stages
// 1. Players are dealt initial 2 pairs of cards
// 2. Cards are revealed to each player
// 3. Check for house win 
// 4. Ask for Hit/Stay
// 5. Win State
// 6. Clear Board, Add score
void playRound(short, std::vector<player> &);
void displayHand(std::string, hand_ref);
void dealCard(hand_ref); // Deal a card randomly to a players hand via ref
void chooseAction(bool &); // Display whether the player wants to hit or stay, modify isStay var by refrence
short checkWin(hand_ref); // Check for win state (0 = No Result, 1 = Blackjack, 2 = Bust)
void aiChoose(bool&, hand_ref); // AI Function to choose whether to hit or stay (true = hit), via ref
short getScore(hand_ref);
void displayStats(std::vector<player>);


int main(int argc, char** argv) {



    // GAME SETUP
    std::vector<player> players;
    
    
    
    // Create Base Players
    player p1;
    p1.isAi = false;
    p1.name = "Human Player";

    player p2;
    player p3;
    player p4;
    p4.name = "Dealer";

    
    //Add Players
    players.push_back(p1);
    players.push_back(p2);
    players.push_back(p3);
    players.push_back(p4);

   
    for(short i=0;i<3;i++){
        std::cout << "Game " << i << std::endl;
        playRound(i, players);
    }

    displayStats(players);
    
    return 0;
}

void playRound(short rndNum, std::vector<player> &players){
    
    std::cout << "--- DEALING CARDS ---" << std::endl;
    //DEAL CARDS (2 times, for 2 cards, doing in seperate loops helps the 
    // Psuedo random generator
    for (short i = 0; i < players.size(); i++) {
        if (players.at(i).isBust == false) {
            dealCard(players.at(i).hand);
        }
    }
    for (short i = 0; i < players.size(); i++) {
        if (players.at(i).isBust == false) {
            dealCard(players.at(i).hand);
        }
    }
    bool inRound = true;
    while (inRound) {
        // Display Hand
        for (short i = 0; i < players.size(); i++) {
            if (players.at(i).isBust == false && players.at(i).isAi == false) {
                displayHand(players.at(i).name, players.at(i).hand);
            }
        }

        // Score Check
        for (short i = 0; i < players.size(); i++) {
            if (players.at(i).isBust == false) {
                short res = checkWin(players.at(i).hand);
                switch (res) {
                    case 1:
                        std::cout << players.at(i).name << " BLACKJACK!" << std::endl;
                        inRound = false;
                        return ;

                    case 2:
                        players.at(i).isBust = true;

                        std::cout << players.at(i).name << " BUSTED!" << std::endl;
                        if (players.at(i).isAi == false) {
                            std::cout << "Human dPlayer Busted, Game over!" << std::endl;
                            return;
                        }
                        
                }
            }
        }


        //Get Choices
        for (short i = 0; i < players.size(); i++) {
            player _plyr = players.at(i);
            if (_plyr.isAi) {
                aiChoose(players.at(i).isStay, players.at(i).hand);
            } else {
                chooseAction(players.at(i).isStay);
            }
        }

        // Give cards to those who want them
        for (short i = 0; i < players.size(); i++) {
            if (players.at(i).isStay == false) {
                dealCard(players.at(i).hand);
                std::cout << "Giving card to : " << players.at(i).name << std::endl;
            }
        }
        
        // Check for wins
        
        inRound = false;
        for (short i = 0; i < players.size(); i++) {
            //std::cout << players.at(i).name << " stay=" << players.at(i).isStay << " bust=" << players.at(i).isBust << std::endl; 
            if (players.at(i).isStay == false && players.at(i).isBust == false) {
                inRound = true;
            }
        }
    }
    
    // Get highest player score
    std::cout << "Round Over, final counts: " << std::endl;
    short winIdx=0;
    for (short i = 0; i < players.size(); i++) {
        short sum = getScore(players.at(i).hand);
        if(sum > getScore(players.at(winIdx).hand)){
            if(sum <= 21){ // Only count highest score UP to 21
                winIdx = i;
            }
            
        }
        players.at(i).stats[rndNum][0] = 0; // Default All To Lost
        players.at(i).stats[rndNum][1] = sum;
        players[i].plydGms++;
    }
    float avg = (float) getScore(players.at(winIdx).hand) / 6;
    
    
    players.at(winIdx).stats[rndNum][0] = 1; // Set winner stat to 1 (win)
    players.at(winIdx).score++; // Add one score to winner
    std::cout << "Winner: " << players.at(winIdx).name << " with score: " << getScore(players.at(winIdx).hand);
    std::cout << "Average Card Value: " << std::fixed << std::setprecision(2) << avg << std::endl;
}

//Displays the given hand for a player in the console

void displayHand(std::string name, short (&hand)[6]) {
    std::cout << name << "'s current hand:" << std::endl;
    for (short i = 0; i<sizeof (hand) / sizeof (short); i++) {
        if (hand[i] != 0) { // Only Print Current Hand
            std::cout << "\t - " << hand[i] << std::endl;
        }
    }
}

void dealCard(short (&hand)[6]) {

    short rndMin = 1;
    short rndMax = 11;
    srand(time(NULL));
    short toDeal = std::rand() % rndMax + rndMin;


    //Find first empty slot in player's hand (0 = empty)
    // Then assign the card to that slot of the hand array
    bool dealt = false;
    for (short i = 0; i<sizeof (hand) / sizeof (short); i++) {
        if (hand[i] == 0 && !dealt) {
            hand[i] = toDeal;
            dealt = true;

        }
    }
}

//Have the AI choose to stay or hit (via ref)
void aiChoose(bool &stay, short (&hand)[6]){
    short sum = getScore(hand); // Get sum of the current hand
    
    short toDeal = std::rand() % 18 + 1; // Choose a random max value to hit
    stay = sum <= toDeal; // If the sum of card is less/equal to the max, hit
}

//Display the choice to the user whether to hit or stay
void chooseAction(bool& stay) {

    char ans; // Store answer
    do {
        std::cout << "Do you want to hit or stay? (h/s)" << std::endl;
        std::cin >> ans;
    } while (ans != 'h' && ans != 's'); // Keep asking for input until valid choices are reached

    // Parse answer + some debug text
    if (ans == 'h') {
        std::cout << "Hitting!" << std::endl;
        stay = false;
    } else {
        std::cout << "Staying" << std::endl;
        stay = true;
    }
}


// Check for win state
short checkWin(short (&hand)[6]) {
    short total = getScore(hand);
    if (total > 21) {
        return 2;
    } else if (total == 21) {
        return 1;
    } else {
        return 0;
    }
} // Check for win state (0 = No Result, 1 = Blackjack, 2 = Bust)


// Get sum of all cards in a hand
short getScore(short (&hand)[6]) {
    short total = 0;
    for (int i = 0; i<sizeof (hand) / sizeof (short); i++) {
        total += hand[i];
    }
    
    return total;
}

void displayStats(std::vector<player> players){
    std::cout << "---------- STATS ---------" << std::endl;
    for(short i=0;i<players.size();i++){
        player ply = players[i];
        std::cout << ply.name << " stats: " << std::endl;
        for(short gm=0;gm<ply.plydGms;gm++){
            std::cout <<"\t - Game: " << gm <<  std::left << std::setw(10) << (ply.stats[gm][0] ? " Won" : " Lost") << " (hand value: "<< ply.stats[gm][1] << ")" << std::endl;
        }
    }
}