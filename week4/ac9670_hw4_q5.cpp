#include <iostream>
using namespace std;

/* This program is to ask the user to input a positive integer n, 
and print a textual image of an hourglass made of 2n lines with asterisks */

int main(){
    int n, i, j, k, asteriskNum, spaceNum;

    cout<<"Please enter a positive integer: "<<endl;
    cin>>n;

    for ( i = 1; i <= 2*n ; i++) { //the outermost for loop is to make sure that 2n lines of asterisks will be output
        if (i >= 1 && i <= n) { //the situation of line 1~n
            spaceNum = 0; //the number of spaces is 0 in line1
            asteriskNum = 2*n - 1; //the number of asterisks is 2n-1 in line(2n-1)
            for (i = 1; i <= n; i++) { //output the spaces
                for (j = 1; j <= spaceNum; j++) {
                    cout<<" ";
                }
                spaceNum++; //the number of spaces is 1 more than its last line

                for (k = 1; k <= asteriskNum; k++) { //output the asterisks
                    cout<<"*";
                }
                asteriskNum -= 2; //the number of spaces is 2 less than its last line

                cout<<endl; //change the line
            }
        }

        if (i >= n + 1 && i <= 2*n) { //the situation of line n+1~2n
            spaceNum = n - 1; //the number of spaces is n-1 in line(n+1)
            asteriskNum = 1; //the number of asterisks is 1 in line(n+1)
            for (i = n + 1; i <= 2*n; i++) { //output the spaces
                for (j = 1; j <= spaceNum; j++) {
                    cout<<" ";
                }
                spaceNum--; //the number of spaces is 1 less than its last line

                for (k = 1; k <= asteriskNum; k++) { //output the asterisks
                    cout<<"*";
                }
                asteriskNum += 2; //the number of spaces is 2 more than its last line

                cout<<endl; //change the line
            }
        }
        
    }
    
    return 0;

}