#include <iostream>
using namespace std;

/* This program is to print the first n even numbers */

int main(){
    int n, i, output;

    /* SECTION A, use a while loop */
    cout << "-------------------------" << endl;
    cout << "        Section A        " << endl;
    cout << "-------------------------" << endl;
    cout<<"Please enter a positive integer: "; 
    cin>>n;

    i = 1;
    while (i <= n){
    output = 2 * i;
    i ++;
    cout<<output<<endl;
    }

    /* SECTION B, use a for loop */
    cout << "-------------------------" << endl;
    cout << "        Section B        " << endl;
    cout << "-------------------------" << endl;
    cout<<"Please enter a positive integer: ";
    cin>>n;

    for (i = 1;i <= n;i ++){
    output = 2 * i;
    cout<<output<<endl;
    } 

    return 0;

}