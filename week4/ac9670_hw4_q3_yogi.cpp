#include<iostream>
#include<cmath>

using namespace std;

/* This program is to convert a number in decimal representation to its binary  representation */
int main() {
    // Request variable
    int decimalNumber;

    // Other internal variable
    int power = 0, binaryPosPrev = 0, binaryPosNext = 0;

    // Request input
    cout << "Enter decimal number:" << endl;
    cin >> decimalNumber;

    // Request validation
    if (decimalNumber <= 0) {
        cout << "PARAM ILLEGAL - Only use positive integers!" << endl;
        return 0;
    }

    // Print result
    cout << "The binary representation of " << decimalNumber << " is ";

    // Convert
    while (decimalNumber > 0) {
        // Get the largest possible 2^n, get the n value
        while (pow(2,power) <= decimalNumber) {
            binaryPosPrev = power++;
        }

        // The n value will guide the printing either '1' or '0'
        if (binaryPosPrev >= binaryPosNext) {
            cout << '1';
            decimalNumber -= pow(2,binaryPosPrev);
            binaryPosNext = binaryPosPrev;
        } else {
            // Print zeroes
            for (int i = 1; i < binaryPosNext - binaryPosPrev; i++) {
                cout << '0';
            }
            binaryPosNext = binaryPosPrev;
        }

        // Reset algebra
        power = 0;
        binaryPosPrev = 0;
    }

    // Additional zeroes if next binary position is not zero yet
    for (int i = 0; i < binaryPosNext; i++) {
        cout << '0';
    }

    cout << endl;
    
    return 0;
}