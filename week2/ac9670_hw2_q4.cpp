#include <iostream>
using namespace std;

/* This program asks the user to input any two positive integer and calculates their sum, difference, product, quotient, integer quotient, and remainder*/

int main(){
    double quotientDou;
    int num1, num2, sum, difference, product, quotientInt, remain;
    
    cout<<"Please enter two positive integers, separated by a space:"<<endl;
    cin>>num1>>num2;

    /* do various mathematical operation */
    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;
    quotientInt = num1 / num2;
    quotientDou = (double)num1 / (double)num2;  //casting the integer type to double type then do the operation
    remain = num1 % num2;

    /* output the result */
    cout<<num1<<" + "<<num2<<" = "<<sum<<endl;
    cout<<num1<<" - "<<num2<<" = "<<difference<<endl;
    cout<<num1<<" * "<<num2<<" = "<<product<<endl;
    cout<<num1<<" / "<<num2<<" = "<<quotientDou<<endl;
    cout<<num1<<" div "<<num2<<" = "<<quotientInt<<endl;
    cout<<num1<<" mod "<<num2<<" = "<<remain<<endl;

    return 0;

}