#include <iostream>
#include <cmath>
using namespace std;

/* This program is to read a sequence of positive integers from the user, calculate and print out their geometric mean */

int main(){
    bool seenEndOfInput;
    int length, count, numSectionA, numSectionB;
    double product, result, index;

    /* --- SECTION A --- */
    cout << "-------------------------" << endl;
    cout << "        Section A        " << endl;
    cout << "-------------------------" << endl;

    cout<<"Please enter the length of the sequence: "; //ask the user to enter the length of the sequence
    cin>>length;

    cout<<"Please enter your sequence: "<<endl; //ask the user to enter the sequence

    product = 1; //initialize the product of the sequence number 
    index = 1 / (double)length; //calculate the index
    for (count = 1; count <= length; count++){
    cin>>numSectionA;
    product *= numSectionA;
    }

    result = pow(product, index); //calculate the geometric mean
    cout<<"The geometric mean is: "<<result<<endl;

    /* --- SECTION B --- */
    cout << "-------------------------" << endl;
    cout << "        Section B        " << endl;
    cout << "-------------------------" << endl;

    cout<<"Please enter a non-empty sequence of positive integers, each one in a separate line. End your sequence by typing -1: "<<endl;

    seenEndOfInput = false;
    length = 0; //initialize the length of the sequence number 
    product = 1; //initialize the product of the sequence number 
    while (seenEndOfInput == false) {
        cin>>numSectionB;
        if (numSectionB == -1) { //when -1 is entered, exit the while loop
           seenEndOfInput = true;
        }
        else {
           product *= numSectionB;
           length++;
        }
    }
    
    index = 1 / (double)length; //calculate the index
    result = pow(product, index); //calculate the geometric mean
    cout<<"The geometric mean is: "<<result;

    return 0;

}