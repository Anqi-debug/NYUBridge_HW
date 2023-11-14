#include <iostream>
using namespace std;

/* This program asks the user to input a monetary value (in x dollars and y cents) and converts it into numbers of different coins */

int main(){
    int quarters, dimes, nickels, pennies, dollars, cents, total, remains; //hold inputs of monetary value and values in total and various units for calculation purposes
    
    cout<<"Please enter your amount in the format of dollars and cents separated by a space:"<<endl;
    cin>>dollars>>cents;
    
    /* calculation: Convert the inputs of monetary value into the representation of various units of coins */
    total = dollars* 100 + cents;
    quarters = total / 25;
    remains = total % 25;
    dimes = remains / 10;
    remains = remains % 10;
    nickels = remains / 5;
    pennies = remains % 5;

    cout<<dollars<<" dollars and "<<cents<<" cents are:"<<endl;
    cout<<quarters<<" quarters, "<<dimes<<" dimes, "<<nickels<<" nickels and "<<pennies<<" pennies"; // output final result
    return 0;

}