#include <iostream>
using namespace std;

/* This program is to convert a number in decimal representation to its binary  representation */

int main(){
    int input, decimalNum, remainder, count, i, sum;

/* Ask the user to enter the input */ 
    cout<<"Please enter a positive integer: "<<endl;
    cin>>input;

/* Convert the input from decimal representation to binary representation */
    decimalNum = input;
    count = 0;
    sum = 0;
    while (decimalNum > 0){
    remainder = decimalNum % 2; //every remainder here is every digit in binary representation
    sum = sum * 2 + remainder; //save the remainder in the sum variable
    count++;
    decimalNum = decimalNum / 2;
    }

/* Output the binary representation */
    cout<<"The binary representation of "<<input<<" is ";
    for (i = count; i > 0; i--) { //generate every digit from sum
    remainder = sum % 2;  
    sum = sum / 2;
    cout<<remainder;
    }

    return 0;

}