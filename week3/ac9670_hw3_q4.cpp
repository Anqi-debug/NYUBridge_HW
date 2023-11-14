#include <iostream>
using namespace std;

/* This program is to ask the user to enter a real number and select a round method to round the number */

const int FLOOR_ROUND = 1; 
const int CEILING_ROUND = 2; 
const int ROUND = 3;

int main(){
    double num; 
    int result;
    char method;

/* Ask the student to input the information */
    cout<<"Please enter a Real number: "<<endl; 
    cin>>num;
    cout<<"Choose your rounding method: "<<endl; 
    cout<<"1. Floor round "<<endl;
    cout<<"2. Ceiling round "<<endl;
    cout<<"3. Round to the nearest whole number "<<endl;
    cin>>method;
    
/* Clacify the status of the student according to the difference between cruuent year and graduation year */
    switch (method){
        case FLOOR_ROUND: // FLOOR_ROUND
            if (num >= 0)
               result = (int)num; // if the number is positive, round off the fractional part
            else if (num < 0)
               result = (int)num - 1;
            break;
        case CEILING_ROUND: // CEILING_ROUND
            if (num >= 0)
               result = (int)num + 1; // if the number is positive, round off the fractional part and +1
            else if (num < 0)
               result = (int)num;
            break;
        case ROUND: // ROUND
            if (num >= 0)
               result = (int)(num + 0.5); // if the number is positive, add 0.5 to this number and round off the fractional part
            else if (num < 0 && ((-1) * num + 0.5) == ((int)(((-1) * num) + 0.5)))
               result = (int)num; // if the number is negitive and the fractional part is 5, round off the fractional part
            else if (num < 0 && ((-1) * num + 0.5) != ((int)(((-1) * num) + 0.5)))
               result = (int)(num - 0.5); // if the number is negitive and the fractional part is not 5, subtract 0.5 from this number and round off the fractional part
            break;
        default:
            break;
    }

/* Output the result */
    cout<<result;

    return 0;

}
    