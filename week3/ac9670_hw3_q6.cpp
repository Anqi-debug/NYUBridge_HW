#include <iostream>
#include <string>
using namespace std;

/* This program is to compute the cost of a long-distance call */

const double PRICE1 =  0.40; 
const double PRICE2 = 0.25; 
const double PRICE3 = 0.15;

int main(){
    double cost;
    int hour, minute, length; 
    char temp;
    string day, status;

/* Ask the user to input the information */
    cout<<"Please enter the time your call is started in 24-hour notation: "; 
    cin>>hour>>temp>>minute;
    cout<<"Please enter the day of the week your call is started in the formation of Mo  Tu  We  Th  Fr  Sa  Su: "; 
    cin>>day;
    cout<<"Please enter the number of minutes your call last: "; 
    cin>>length;

/* calculate the cost of the call */
    if (day == "Sa" || day == "Su"){ //When the day is in weekend
        if (hour <0 || hour >= 24){ //When the formation time input is invalid
           status = "Please input the right time formation in 24-hour notation.";
           cout<<status;
        }
        else if (hour >=0 && hour < 24){ //When the formation time input is valid
            status = "The cost of your call is $";
            cost = PRICE3 * length;
            cout<<status<<cost<<".";
        }
    }
    else if (day == "Mo" || day == "Tu" || day == "We" || day == "Th" || day == "Fr"){ //When the day is in weekday
        if (hour <0 || hour >= 24){ //When the formation time input is invalid
           status = "Please input the right time formation in 24-hour notation.";
           cout<<status;
        }
        else if (hour >= 8 && hour < 18){ //When the time is between 8:00~18:00
            status = "The cost of your call is $";
            cost = PRICE1 * length; 
            cout<<status<<cost<<".";
        }
        else if (hour < 8 || hour >=18){ //When the time is before 8:00 or later than 18:00
            status = "The cost of your call is $";
            cost = PRICE2 * length;
            cout<<status<<cost<<".";
        }
    }
    else{ //When the formation day input is invalid
        status = "Please input the right formation of the day of the week.";
        cout<<status;
    }

    return 0;

}
    