#include <iostream>
#include <string>
using namespace std;

/* This program is to calculate the BMI of a person and out put the weight status */

const double MULTIPLE_WEIGHT =  0.453592; 
const double MULTIPLE_HEIGHT = 0.0254; 

int main(){
    double pounds, inches, weight, height, bmi; 
    string status;

/* Ask the user to input the information */
    cout<<"Please enter weight (in pounds): "; 
    cin>>pounds;
    cout<<"Please enter height (in inches): "; 
    cin>>inches;

/* calculate the BMI and clacify the weight status */
    weight = pounds * MULTIPLE_WEIGHT;
    height = inches * MULTIPLE_HEIGHT;
    bmi = weight / (height * height);

    if (bmi < 18.5)
        status = "Underweight";
    else if (bmi >= 18.5 && bmi < 25)
        status = "Normal";
    else if (bmi >= 25 && bmi < 30)
        status = " Overweight";
    else if (bmi >= 30)
        status = "Obese";

/* Output the result */
    cout<<"The weight status is: "<<status;

    return 0;

}
    