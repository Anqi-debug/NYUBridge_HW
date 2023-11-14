#include <iostream>
#include <string>
using namespace std;

/* This program is to display the current status a student is in */

int main(){
    int curYear, graYear, difference; 
    string name, status;

/* Ask the student to input the information */
    cout<<"Please enter your name: "; 
    cin>>name;
    cout<<"Please enter your graduation year: "; 
    cin>>graYear;
    cout<<"Please enter current year: "; 
    cin>>curYear;

/* Clacify the status of the student according to the difference between cruuent year and graduation year */
    difference = graYear - curYear;
    if (difference > 4)
        status = "not in college yet";
    else if (difference == 4)
        status = "freshman";
    else if (difference == 3)
        status = " sophomore";
    else if (difference == 2)
        status = "junior";
    else if (difference == 1)
        status = "senior";
    else 
        status = "graduated";

/* Output the result */
    cout<<name<<", you are a "<<status;

    return 0;

}
    