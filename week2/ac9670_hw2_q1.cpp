#include <iostream>
using namespace std;

/* This program reads in different coin values and returns the monetary value in x dollars and y cents. */

int main(){
    int quarters, dimes, nickels, pennies, dollars, cents, total; //hold inputs of different coin values and calculated coin values
    
    cout<<"Please enter number of coins:"<<endl; 
    cout<<"# of quarters:";
    cin>>quarters;
    cout<<"# of dimes:"; 
    cin>>dimes;
    cout<<"# of nickels:";
    cin>>nickels;
    cout<<"# of pennies:";
    cin>>pennies;

    /* calculation: convert the values into the representation in dollars and cents */
    total = pennies + nickels*5 + dimes*10 + quarters*25;
    dollars = total / 100;
    cents = total % 100;

    cout<<"The total is "<<dollars<<" dollars and "<<cents<<" cents"<<endl;

    return 0;

}