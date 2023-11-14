#include <iostream>
using namespace std;

/* This program is to print all of the numbers 
from 1 to n that have more even digits than odd digits */

int main(){
    int n, i, tempNum, quotient, remainder, parityJudg, result;
    int evenDigit, oddDigit;

    cout<<"Please enter a positive integer: ";
    cin>>n;

    for (i = 1; i <= n; i++) { //the outermost for loop is to make sure that all the number from 1 to n will be checked
        tempNum = i;
        quotient = tempNum;
        evenDigit = 0; //initilize the number of even digits in every number
        oddDigit = 0; //initilize the number of odd digits in every number
        while (quotient > 0) {
            remainder = quotient % 10; //generate every digit in the number
            parityJudg = remainder % 2; //mod the digit by 2 to confirm whether it's even or odd
            if (parityJudg == 0) { //if the digit is even, then the evenDigit variable will be added 1
                evenDigit += 1;
            }
            else { //if the digit is odd, then the oddDigit variable will be added 1
                oddDigit += 1;
            }   
            quotient = quotient / 10; //calculate the next digit
        }
        
        if (evenDigit > oddDigit) { //for the numbers that have more even digits than odd digits, output it
            result = tempNum;
            cout<<result<<endl;
        }
        
    }
    
    return 0;

}