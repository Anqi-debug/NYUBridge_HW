#include <iostream>
#include <cmath>
using namespace std;

/* This program is to convert a number in decimal representation to its binary  representation */

int main(){
    int input, i, count;
    int binPowerMax, comparisonNum, remainingValue, preRemainValue;

/* Ask the user to enter the input */ 
    cout<<"Please enter a positive integer: "<<endl;
    cin>>input;

/* Convert the input from decimal representation to binary representation */
    binPowerMax = 0;
    comparisonNum = pow(2, binPowerMax);
    while (input >= comparisonNum) {
        binPowerMax++;
        comparisonNum = pow(2, binPowerMax);
    }
    
    cout<<"The binary representation of "<<input<<" is ";
    
    comparisonNum = pow(2, binPowerMax);
    preRemainValue = input;
    remainingValue = preRemainValue - comparisonNum;
    i = 0; 
    count = 1;
    while (i <= binPowerMax) {
        if (remainingValue < 0) {
            if (count == 1) {
                cout<<"";
            }
            else {
                cout<<0;
            }     
        }
        if (remainingValue >= 0) {
            cout<<1;
        }
        binPowerMax--;
        comparisonNum = pow(2, binPowerMax);
        remainingValue = preRemainValue - comparisonNum;
        if (remainingValue >= 0) {
            preRemainValue = remainingValue;
        }
        else {
            preRemainValue = preRemainValue;
        }
        count++;
   }

    return 0;

}