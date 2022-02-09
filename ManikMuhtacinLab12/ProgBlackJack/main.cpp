#include <iostream>
#include <stdlib.h>
#include <cstdio>
#include <ctime>
#include <string>
#include <vector>
using namespace std;



//declares all cards as chars
const char *valueName[] = {"2", "3", "4", "5","6", "7", "8", "9", "10", "J", "Q", "K", "A"};

int suit(int card){
    return card / 13;
}

int value(int card) {
    return card % 13;
}

//gets the cards in the deck
void in_deck(vector<int> &deck)
{
    for (unsigned i=0; i < deck.size(); ++i) {
        deck[i] = i % 52;
    }
}

//shuffles all cards
void shuffle_cards(vector<int> &deck)
{
    for (unsigned i=0; i < deck.size(); ++i) {
        int pos = i + rand() % (deck.size()-i);
        swap(deck[i], deck[pos]); //uses the swap function to exchange cards
    }
}

//gets card name from where cards were declared as chars
string cardName(int card)
{
    string result = valueName[value(card)];
    return result;
}


int handValue(const vector<int> &hand)
{
    int total = 0;
    int numAces=0;
    for (unsigned i=0; i < hand.size(); ++i) {
        int val = value(hand[i]);
        if (val <= 8) {
            total += val + 2;
        } else if (val <= 11) {
            total += 10;
        } else {
            total += 11;
            ++numAces;
        }
    }

    while (total > 21 && numAces--) {
        total -= 10;
    }

    return total;
}

//calculates percentage
double percentage(double hand1, double hand2, double total){
    double total_after=0;
    for(unsigned i=1; i< 14; i++){ // set iteration from 1 to 14
        if(i!=hand1 && i!=hand2){ // same cards cannot be used
            if(total+ i > 21) //adds each card with the total points until > 21
            total_after=total_after+1;
        }
    }
    double odd= int((total_after/11)*100); //converts the double to int so decimal goes away
                                        //there is 11 cards left after the two is used and that is divided by the total after
                                        // then divided by 100 to get a percentage
    if(odd > 100)
        odd=100;
    return odd;
}

//stay or hit function
void stayorhit(int percent){
    if (percent > 50) //if percentage > 50 tells user to stay
        cout << "Stay!" << endl;
    else
        cout << "Hit me!" << endl;

}

int main(){
    vector<int> all_card(52);
    int pos = 0;

    vector<int> current_hand;
    srand(time(NULL)) ;
    in_deck(all_card);
    shuffle_cards(all_card);

    current_hand.push_back(all_card[pos++]);
    current_hand.push_back(all_card[pos++]);

    int first_card=current_hand[0]; //gets first card after shuffled from vector
    int second_card=current_hand[1]; //gets second card after shuffled from vector
    int total = handValue(current_hand);
    int bust=percentage(first_card, second_card, total);

    //cout statement
    cout << "Current hand is : " << cardName(first_card) << "-" << cardName(second_card);
    cout << " with a total value of " << total << " points" << endl;
    cout << "Odds of busting are: " <<  bust << "%" << endl;
    stayorhit(bust);

    current_hand.push_back(all_card[pos++]);
    cout << "Next Card Was... " << cardName(current_hand.back()) << "!" << endl;
    return 0;

}
