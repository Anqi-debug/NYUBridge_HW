#include <iostream>
#include <string>
#include <cmath>
using namespace std;

/* This program is to classify if a quadratic equation have real results and figure out the results */

int main(){
    double aParameter, bParameter, cParameter, discriminant, sqrtResult, result1, result2; 
    string solutions;

/* Ask the student to input the value of a, b and c */
    cout<<"Please enter value of a: "; 
    cin>>aParameter;
    cout<<"Please enter value of b: "; 
    cin>>bParameter;
    cout<<"Please enter value of c: "; 
    cin>>cParameter;

   result1 = 0; //initialize result1
   result2 = 0; //initialize result2
   discriminant = bParameter * bParameter - 4 * aParameter * cParameter; //calculate the result of (b^2 - 4ac)

/* Clacify the the solutions of the quadratic equation */
    if (aParameter == 0 && cParameter == 0){ //the case of 0x^2 + 0x + 0 = 0
        solutions = "infinite number of solutions.";
    }
    else if (aParameter == 0 && cParameter != 0){ //the case of 0x^2 + 0x + c = 0
        solutions = "no solution.";
    }
    else if (aParameter != 0 && discriminant < 0){ //the case of (b^2 - 4ac) < 0
        solutions = "no real solution.";
    }
    else if (aParameter != 0 && discriminant == 0){ //the case of (b^2 - 4ac) = 0
        result1 = (-1) * bParameter / 2 * aParameter;
        solutions = "a single real solution x=";
    } 
    else if (aParameter != 0 && discriminant > 0){ //the case of (b^2 - 4ac) > 0
        sqrtResult = sqrt(discriminant);
        result1 = ((-1) * bParameter + sqrtResult) / 2 * aParameter;
        result2 = ((-1) * bParameter - sqrtResult) / 2 * aParameter;
        solutions = "two real solutions, x1=";
    }
    else{
        solutions = solutions;
    }
    

/* Output the result */
    if (result1 != 0 && result2 == 0)
       cout<<"This equation has "<<solutions<<result1;
    else if (result1 != 0 && result2 != 0)
       cout<<"This equation has "<<solutions<<result1<<", x2="<<result2;
    else
       cout<<"This equation has "<<solutions;

    return 0;

}
    