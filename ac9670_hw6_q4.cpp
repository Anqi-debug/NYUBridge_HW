#include <iostream>
#include <cmath>
using namespace std;

/* This program is to make the user to enter a positive integer, then print all of num’s divisors in an ascending order, separated by a space.*/

void printDivisors(int num); //declare the printDivisors function

/* The main frame*/
int main() {
    int n;

    cout<<"Please enter a positive integer >= 2: ";
    cin>>n;
    printDivisors(n); //call the printDivisors function
}

/*The printDivisors function frame*/
void printDivisors(int num) {
    int i, k, remainder;
    double squarValue;

    squarValue = sqrt(num); //calculate the square root of the num
    
    for (i = 1; i <= squarValue; i++) { //print out the divisors which are smaller or equal to the square root of num
        remainder = num % i; //check if i is divisible to the num
        if (remainder == 0) { //if i is divisible to the num
            cout<<i<<" "; //i is the divisor of num
        }
    }
    for (i = squarValue + 1; i <= num; i++) { //print out the divisors which are greater or equal to the square root of num
        remainder = num % i; //check if i is divisible to the num
        if (remainder == 0) { //if i is divisible to the num
            cout<<i<<" "; //i is the divisor of num
        }
    } 
}