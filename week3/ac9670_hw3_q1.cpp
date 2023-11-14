#include <iostream>
using namespace std;

/* This program is to compute how much a customer has to pay for two items according to some rules */

int main(){
    double price1, price2, lowerPrice, higherPrice, basePrice, proPrice, disPrice, totalprice, tax; 
    char clubCard;

    cout<<"Enter price of first item: "; 
    cin>>price1;
    cout<<"Enter price of second item: "; 
    cin>>price2;

/* Compare the price of two items and find out the bigger one and the smaller one */
    if (price1 > price2){
       lowerPrice = price2;
       higherPrice = price1;
    }
    else{
       lowerPrice = price1;
       higherPrice = price2;
    }

    basePrice = price1 + price2; //calculate the base price
    proPrice = higherPrice + lowerPrice * 0.5; //calculate the discount price after get one half off promotion of the lower price

/* Ask if the customer is a member, if so, calculate the discount price */
    cout<<"Does customer have a club card? (Y/N): ";
    cin>>clubCard;
    if (clubCard == 'Y' || clubCard == 'y')
       disPrice = proPrice * 0.9;
    else if (clubCard == 'N' || clubCard == 'n')
       disPrice = proPrice;

    cout<<"Enter tax rate, e.g. 5.5 for 5.5% tax: ";
    cin>>tax;

    totalprice = disPrice * (1 + tax * 0.01); //calculate the price after tax

/* Output the result */
    cout<<"Base price: "<<basePrice<<endl;
    cout<<"Price after discounts: "<<disPrice<<endl;
    cout<<"Total price: "<<totalprice<<endl;

    return 0;

}