#include <iostream>
using namespace std;

/* This program is to make the user to input a positive integer and character, 
then print a ‘pine tree’ consisting of n triangles of increasing sizes, filled with the character */

void printPineTree(int n, char symbol); //declare the printOineTree function

/*The main frame */
int main() {
    int num;
    char symbol;

    cout<<"Please enter the number of triangles: ";
    cin>>num;
    cout<<"Please enter the character to fill the triangles: ";
    cin>>symbol;
    printPineTree(num, symbol); //call the printOineTree function

    return 0;
}

/* The printShiftedTriangle function frame*/
void printShiftedTriangle(int n, int m, char symbol) {
    int spaceNum, charNum, i, k, j;
    
    spaceNum = m + n - 1; //initialize the number of space to print out in each line
    charNum = 1; //initialize the number of character to print out in each line
    for (i = 1; i <= n; i++) { //print out spaces in each line
        for (k = 1; k <= spaceNum; k++) {
            cout<<" ";
        }
        for (j = 1; j <= charNum; j++) { //print out characters in each line
            cout<<symbol;
        }
        cout<<endl; //change the line
        spaceNum--; //the number of spaces to print out will decrease by 1 in each loop 
        charNum += 2; //the number of characters to print out will increase by 2 in each loop 
    }
}

void printPineTree(int n, char symbol) {
    int m, i, k;
    
    k = n; //initialize the loop count 
    m = n - 1; //initialize the (int m) patameter passed over to printShiftedTriangle function
    n = 2; //initialize the (int n) patameter passed over to printShiftedTriangle function
    for (i = 1; i <= k; i++) {
        printShiftedTriangle(n, m, symbol); //call the printShiftedTriangle function to print out ShiftedTriangle
        n++; //the number of (int n) patameter will increase by 1 in each loop 
        m--; //the number of (int n) patameter will decrease by 1 in each loop 
    }  
}