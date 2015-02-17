/* 
 * File:   EulerP90.cpp
 * Author: Konstantin Kazantsev
 *
 * Created on February 9, 2015, 4:59 PM
 */

#include <cstdlib>
#include <string>   // need for string
#include <stdio.h>  // need for printf
#include <iostream> // need for cout

using namespace std;

// An array with the numbers
const int numArray [] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

// Counter of all the arrangements
int count = 0;

// array to hold all arrangements
int arr [][];

// temporary array holder

void permute (char holder [],int pos){
    if (pos >= 2) {
        // holder contains a completed permutation
        cout << count << endl;
        cout << holder << endl;
    }
    else{
        // for each letter in alphabet
        cout << "have nothing" << endl;
            //holder[pos] = letter]
            //permute(holder, pos+1)
    }
}

int main(int argc, char** argv) {
    return 0;
}