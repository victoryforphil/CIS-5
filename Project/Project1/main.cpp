#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <time.h>


#define hand_ref short (&hand)[6]

// Game Stages
// 1. Players are dealt initial 2 pairs of cards
// 2. Cards are revealed to each player
// 3. Check for house win 
// 4. Ask for Hit/Stay
// 5. Win State
// 6. Clear Board, Add score

void displayHand(std::string, hand_ref);
void dealCard(hand_ref); // Deal a card randomly to a players hand via ref
void chooseAction(bool &); // Display whether the player wants to hit or stay, modify isStay var by refrence
short checkWin(hand_ref); // Check for win state (0 = No Result, 1 = Blackjack, 2 = Bust)
void aiChoose(bool&, hand_ref); // AI Function to choose whether to hit or stay (true = hit), via ref
short getScore(hand_ref);

int main(int argc, char** argv) {
    // Not a var declaration, so I hope this is okay.

    struct player {
        bool isAi = true;
        bool isStay;
        bool isBust = false;
        std::string name = "AI Player";
        short score = 0;
        short hand[6] = {0, 0, 0, 0,0,0}; // TODO: Convert to vector
    };

    // GAME SETUP
    std::vector<player> players;

    player p1;
    p1.isAi = false;
    p1.name = "Human Player";

    player p2;
    player p3;
    player p4;
    p4.name = "Dealer";

    players.push_back(p1);
    players.push_back(p2);
    players.push_back(p3);
    players.push_back(p4);

    bool inRound = true;
    std::cout << "--- DEALING CARDS ---" << std::endl;
    //DEAL CARDS
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
                        return 0;
                        break;
                    case 2:
                        players.at(i).isBust = true;

                        std::cout << players.at(i).name << " BUSTED!" << std::endl;
                        if (players.at(i).isAi == false) {
                            std::cout << "Human dPlayer Busted, Game over!" << std::endl;
                            return 0;
                        }
                        break;
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
    
    std::cout << "Round Over, final counts: " << std::endl;
    short winIdx=0;
    for (short i = 0; i < players.size(); i++) {
        short sum = getScore(players.at(i).hand);
        if(sum > getScore(players.at(winIdx).hand)){
            if(sum <= 21){
                winIdx = i;
            }
            
        }
    }
    
    std::cout << "Winnter: " << players.at(winIdx).name << " with score: " << getScore(players.at(winIdx).hand);
    return 0;
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
void aiChoose(bool &stay, short (&hand)[6]){
    short sum = getScore(hand);
    
    short toDeal = std::rand() % 18 + 1;
    stay = sum <= toDeal;
}
void chooseAction(bool& stay) {

    char ans;
    do {
        std::cout << "Do you want to hit or stay? (h/s)" << std::endl;
        std::cin >> ans;
    } while (ans != 'h' && ans != 's');

    if (ans == 'h') {
        std::cout << "Hitting!" << std::endl;
        stay = false;
    } else {
        std::cout << "Staying" << std::endl;
        stay = true;
    }
}

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

short getScore(short (&hand)[6]) {
    short total = 0;
    for (int i = 0; i<sizeof (hand) / sizeof (short); i++) {
        total += hand[i];
    }
    
    return total;
}