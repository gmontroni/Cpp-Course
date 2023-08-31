#include <iostream>

using namespace std;

/*
o jogo consiste em adivinhar o número
onde, dado um número inicial, o usuário
irá entrar com valores até que ele acerte
este número
*/

int main()
{
    int secretNum = 7;
    int guess;
    int guessCount = 0;
    int guessLimit = 3;
    bool outOfGuesses = false;

    while(secretNum != guess && !outOfGuesses){

        if(guessCount < guessLimit){
            cout << "Enter guess: ";
            cin >> guess;
            guessCount++;
        } else {
            outOfGuesses = true;    // caso o número de palpites tenha
                                    // acabado o código encerra
        }

    }

    if(outOfGuesses){
        cout << "You Lose!";
    } else {
        cout << "You win!";
    }

    return 0;
}
