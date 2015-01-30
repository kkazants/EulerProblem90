/* 
 * File:   main.cpp
 * Author: Konstantin Kazantsev
 * CSCI 
 * Euler Problem 1
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*Helper formula for getTotal()*/
int getSum(int var, int upTo) {
    int total = 0;
    int n = (upTo - 1) / var;
    for (int counter = 1; counter <= n; counter++) {
        int mult = var*counter;
        if (mult < upTo)
            total += mult;
    }
    return total;
}

/*
 * formula to get the sum of 2 multiples upTo a value all entered by user
 */
void getTotal(int mult1, int mult2, int upTo) {
    int mult3 = mult1*mult2;
    int total = getSum(mult1, upTo) + getSum(mult2, upTo) - getSum(mult3, upTo);
    cout << "Total using function: " << total << endl;
}

/*
 * Formula for constant time.
 * variable 1 and 2 are entered by user.
 * the upTo value is also entered by user.
 */
void getSum(int var1, int var2, int upTo) {
    int n1 = (upTo - 1) / var1;
    int n2 = (upTo - 1) / var2;
    int n3 = (upTo - 1) / (var1 * var2);
    int sum = (var1 * n1 * (n1 + 1) / 2)+(var2 * n2 * (n2 + 1) / 2)-((var1 * var2) * n3 * (n3 + 1) / 2);
    cout << "Total using function: " << sum << endl;
}

int main(int argc, char** argv) {
    
    // Linear Time
    int total3 = 0;
    int total5 = 0;
    int total15 = 0;
    int upto = 1000;
    for (int counter = 1; counter < ((upto-1)/3); counter++) {
        int mult3 = 3 * counter;
        if (mult3 < upto)
            total3 = total3 + mult3;
    }
    for (int counter = 1; counter < (upto-1)/5; counter++) {
        int mult5 = 5 * counter;
        if (mult5 < upto)
            total5 = total5 + mult5;
    }
    for (int counter = 1; counter < (upto-1)/15; counter++) {
        int mult15 = 15 * counter;
        if (mult15 < upto)
            total15 = total15 + mult15;
    }
    int total = total3 + total5 - total15;
    cout << "Grand total in linear time: " << total << endl;
    // end on linear time

    // Constant Time
    int n3 = 999 / 3;
    int n5 = 999 / 5;
    int n15 = 999 / 15;
    int sum = (3 * n3 * (n3 + 1) / 2)+(5 * n5 * (n5 + 1) / 2)-(15 * n15 * (n15 + 1) / 2);
    cout << "Grand total in constant time: " << sum << endl;

    // Linear time using function
    getTotal(3, 5, 1000);
    getTotal(8, 9, 1000);
    
    // Constant time using function
    getSum(3, 5, 1000);
    getSum(8, 9, 1000);
    return 0;
}

