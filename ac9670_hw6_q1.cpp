#include <iostream>
using namespace std;

/*The program is to require the user to enter a positive integer num, and print out the num's elements in the Fibonacci sequence.*/

int fib(int n); //declare the fib function

/* The main frame */
int main() {
    int num, result;
    cout<<"Please enter a positive integer: ";
    cin>>num;
    result = fib(num); //call the fib function 
    cout<<result;
    return 0;
}

/* The fib function frame */
int fib(int n){
    int result, preResult,prePreResult, i;
    if (n == 1 || n == 2){ //when the num is 1 or 2, the accordingly element is 1
        result = 1;
    }
    else {
        i = 3; //initialize the loop count
        prePreResult = 1; //initialize the (num-2)'s element
        preResult = 1; //initialize the (num-1)'s element
        result = prePreResult + preResult; //initialize the num's element
        while (i < n){
            prePreResult = preResult; //the value of (num-1)'s element is given to the (num-2)'s element
            preResult = result; //the value of num's element is given to the (num-1)'s element
            result = prePreResult + preResult; //the value of num's element is the sum of (num-1)'s element and (num-2)'s element
            i++;
        } 
    }
    return result; //return to value of the  num's element to main
}