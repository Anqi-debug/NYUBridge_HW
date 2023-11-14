#include <iostream> 
#include <cstdlib> 
#include <ctime> 
using namespace std; 

/* This program is to generate a random integer between 1~100, and have the user try to guess the number in 5 chances. */

const int ALL_CHANCE = 5; //all the guess chances is 5
int main() { 
    int randomNum, guessNum, edgeNumSmall, edgeNumBig; 
    int chanceLeft, guessChance;

    srand(time(0)); 
 
    randomNum = (rand() % 100) + 1; 
    edgeNumSmall = 1; //the smaller edge number of the random number
    edgeNumBig = 100; //the bigger edge number of the random number
    chanceLeft = ALL_CHANCE; 

    cout<<"I thought of a number between 1 and 100! Try to guess it."<<endl; 

    while (chanceLeft > 0) {
        cout<<"Range: ["<<edgeNumSmall<<", "<<edgeNumBig<<"], Number of guesses left: "<<chanceLeft<<endl;
        cout<<"Your guess: "; //have the user to enter the guess number
        cin>>guessNum;
        chanceLeft--; //every time the user guess a number, the chances left is subtracted by 1
        if(guessNum == randomNum) {
            guessChance = ALL_CHANCE - chanceLeft; //the chances the user used for guessing the number 
            cout<<"Congrats! You guessed my number in "<<guessChance<<" guesses."<<endl; //if the user guess the number, output the message and break the loop
            cout<<endl;
            break;
        }
        if (chanceLeft == 0 && guessNum != randomNum) { //when 5 chances are used and the number is not guessed, output this message
            cout<<"Out of guesses! My number is "<<randomNum;
            break;
        }
        if(guessNum > randomNum) { //if the guess number is bigger than the random number
            edgeNumBig = guessNum - 1; //redefine the smaller edge number
            cout<<"Wrong! My number is smaller."<<endl;
            cout<<endl;
        }
        if(guessNum < randomNum) { //if the guess number is bigger than the random number
            edgeNumSmall = guessNum + 1; //redefine the bigger edge number
            cout<<"Wrong! My number is bigger."<<endl;
            cout<<endl;
        }   
    }
    
    return 0; 
 }