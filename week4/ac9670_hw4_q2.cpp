#include <iostream>
#include <string>
using namespace std;

/* This program is to use the Roman Numerals System to represent positive integers */

int main(){
    int input, decimalNum, currDigit, counter;
    int digitI = 0, digitV = 0, digitX = 0, digitL = 0, digitC = 0, digitD = 0, digitM = 0;
    string romanDigit;

/* Ask the user to enter the input */
    cout<<"Enter decimal number: "<<endl;
    cin>>input;

/* Calculate the number of every digit in Roman Numerals System needed */
    decimalNum = input;
    currDigit = 0;
    counter = 1;
    while (decimalNum > 0) { //separate out the single digits
        currDigit = decimalNum % 10;
        if (counter == 1){ //calculate the number of I and V needed
            digitI = currDigit % 5;
            digitV = currDigit / 5;
            decimalNum = decimalNum / 10;
        }
        else if (counter == 2) { //calculate the number of X and L needed
            digitX = currDigit % 5;
            digitL = currDigit / 5;
            decimalNum = decimalNum / 10;
        }
        else if (counter == 3) { //calculate the number of C and D needed
            digitC = currDigit % 5;
            digitD = currDigit / 5;
            decimalNum = decimalNum / 10;
        }
        else { //calculate the number of M needed
            digitM = decimalNum;
            decimalNum = 0; //M is the biggest digit in Roman Numerals System, no need to loop further
        } 
        counter ++;
    }

/* generate the representation in Roman Numerals System */
    romanDigit = "";
    counter = 1;
    while (counter <= digitI) { //generate the "I" digits
        romanDigit = "I" + romanDigit;
        counter ++;
    }

    counter = 1;
    while (counter <= digitV) { //generate the "V" digits
        romanDigit = "V" + romanDigit;
        counter ++;
    }
    
    counter = 1;
    while (counter <= digitX) { //generate the "X" digits
        romanDigit = "X" + romanDigit;
        counter ++;
    }

    counter = 1;
    while (counter <= digitL) { //generate the "L" digits
        romanDigit = "L" + romanDigit;
        counter ++;
    }

    counter = 1;
    while (counter <= digitC) { //generate the "C" digits
        romanDigit = "C" + romanDigit;
        counter ++;
    }

    counter = 1;
    while (counter <= digitD) { //generate the "D" digits
        romanDigit = "D" + romanDigit;
        counter ++;
    }

    counter = 1;
    while (counter <= digitM) { //generate the "M" digits
        romanDigit = "M" + romanDigit;
        counter ++;
    }

/* Output the result */
    cout<<input<<" is "<<romanDigit;

    return 0;

}