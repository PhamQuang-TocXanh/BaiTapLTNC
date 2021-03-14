#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
void result(int, int, int);
void tactic(int , int&);

int main()
{
    int card01, card02;
    srand(time(NULL));
    card01 = rand() % 101;
    do {
        card02 = rand() % 101;
    } while (card01 == card02);

    cout << "The value of card 1 is: " << card01 << endl;

    int guess;
    tactic(card01, guess);
    result(card01, card02, guess);

    cout << endl << "The value of card 2 is: " << card02;
    return 0;
}

void result(int card01, int card02, int guess)
{
    if (guess == 1) {
        if (card01 > card02) cout << "Bob win!";
        else cout << "Bob lose!";
    }
    if (guess == 2) {
        if (card02 > card01) cout << "Bob win!";
        else cout << "Bob lose!";
    }
}

void tactic(int card01,int& guess)
{
    if (card01 > 50) {
        cout << "Bob chooses card 1" << endl;
        guess = 1;
    }
    else
    {
        cout << "Bob chooses card 2" << endl;
        guess = 2;
    }
}
