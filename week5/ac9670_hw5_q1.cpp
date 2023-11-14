#include<iostream>
using namespace std;

/* This program is to read a positive integer n from the user and print out a nxn multiplication table. */

int main(){
    int n, a, b, product;

    cout<<"Please enter a positive integer: "<<endl; //have the user to input the number
    cin>>n;

    a = 1; //initialize the x axis variable
    while (a >=1 && a <= n) { //the condition of the loop is make sure the line of the table is n
        b = 1; //initialize the y axis variable
        while (b >=1 && b <= n) { //the condition of the loop is make sure the column of the table is n
            product = a * b; //calculate the multiple value
            cout<<product<<"\t"; //output the value
            b++; 
        }
        cout<<endl; //change the line
        a++;
    }
    

    return 0;
}