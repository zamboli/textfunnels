//
// NAME: diceroll.cc
// AUTHOR: Ben Lazan
// DATE: 08/ 2/2012
// DESCRIPTION:simple dice roll game that draws dice
//
#include<iostream>
#include<cstdlib>
using namespace std;

void roll(int&,int&);
void drawdie(int);

int main()
{
    int die1,die2;

    roll(die1,die2);
    //draw dice
    drawdie(die1);
    drawdie(die2);

    cout << "You rolled a " << die1 << " and a " << die2 << endl;
    
    if ((die1 + die2) == 7 || (die1 + die2) == 11)
        cout << "You Win!\n";
    else
        cout << "You Lose!\n";

    return 0;
}

void roll(int& d1,int& d2) {
    srand(time(NULL));//seeds random number generator with new #
    
    d1 = (rand() % 6 + 1);//generates remainder between 0 and 5 and adds 1
    d2 = (rand() % 6 + 1);//i learned how from google
    return;
}
//define die components
inline void top() { cout << "---------\n";}
inline void two() { cout << "| o   o |\n";}
inline void one() { cout << "|   o   |\n";}
inline void non() { cout << "|       |\n";}
//draw dice
void drawdie(int num) { 
    top();
    if (num == 1) {
        non(); one(); non();
    } else if (num == 2) {
        one(); non(); one();
    } else if (num == 3) {
        one(); one(); one();
    } else if (num == 4) {
        two(); non(); two();
    } else if (num == 5) {
        two(); one(); two();
    } else {
        two(); two(); two();
    }
    top();
}
