#include"HANGMAN/draw.h"
////
using namespace std;

int main(int agrc, char *argv[]){
    srand(time(0));
    char play='Y';
    do{
        playGame();
        cout << "Do you want to play again?(Yes/No): ";
        string ans; cin >> ans; play=ans[0];
    }while(play == 'Y' || play == 'y');
    return 0;
}

////
