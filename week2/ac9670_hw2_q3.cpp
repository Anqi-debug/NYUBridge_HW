#include <iostream>
using namespace std;

/* This program calculates the total working time of John and Bill (or any two persons). */

int main(){
    int daysJhon, hoursJhon, minJhon, daysBill, hoursBill, minBill, totalTime, totalDays, totalHours, totalMin, remainTime;
    
    cout<<"Please enter the number of days John has worked:"; 
    cin>>daysJhon;
    cout<<"Please enter the number of hours John has worked:"; 
    cin>>hoursJhon;
    cout<<"Please enter the number of minutes John has worked:";
    cin>>minJhon;
    cout<<endl;
    cout<<"Please enter the number of days Bill has worked:";
    cin>>daysBill;
    cout<<"Please enter the number of hours Bill has worked:";
    cin>>hoursBill;
    cout<<"Please enter the number of minutes Bill has worked:";
    cin>>minBill;
    cout<<endl;


    /* caculation: caculate the total working time in the format of minutes and then convert it into the representation of xDays, X hours and X minutes */
    totalTime = (daysJhon + daysBill)*24*60 + (hoursJhon + hoursBill)*60 + minJhon + minBill;
    totalDays = totalTime / 1440;
    remainTime = totalTime % 1440;
    totalHours = remainTime / 60;
    totalMin = remainTime % 60;

    cout<<"The total time both of them worked together is: "<<totalDays<<" days, "<<totalHours<<" hours and "<<totalMin<<" minutes."<<endl;

    return 0;

}