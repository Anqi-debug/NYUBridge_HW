#include <iostream>
using namespace std;

/* This program is to calculate the approximate value of e*/

double eApprox(int n);
double factorial(int n);

int main () {
    cout.precision(30);

    for (int n = 1; n <= 15; n++) { //calculate the approximate value of e by the sum of the first 2~16 addends
        cout<<"n = "<<n<<'\t'<<eApprox(n)<<endl; //call the eApprox function
    } 
}

/* eApprox function frame*/
double eApprox(int n) {
    int i, k;
    double factorial, eApprox;

    factorial = 1; //initialize the factorial value
    eApprox = 1; //initialize the approximate value of e
    for (i = 1; i <= n; i++){
        factorial *= i; //calculate the factorial value
        eApprox += 1 / factorial; //calculate the approximate value of e
    }
    return eApprox; //return the approximate value of e to the main frame
}
