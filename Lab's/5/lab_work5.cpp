// generate and output array [10] and fill random numbers in range (-140; 100)
// extract in new array paired !Elements!
// find min !Element! in positive
//
// variant 3, Andrij Zyniuk, ІПЗ 22К/1

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>

using namespace std;

int main(){
    int minPositive = INT_MAX;
    const int LENGTH = 10;
    const int half_LENGTH = LENGTH / 2;

    int array[LENGTH];
    int pairedArray[half_LENGTH];
    

    srand(static_cast<unsigned int>(time(nullptr)));

    // filling array with random numbers & output to console
    printf("MainArray: ");
    for (int count = 0; count < LENGTH; count++) {
        array[count] = rand() % (100 - (-140) + 1) + (-140);
        cout << array[count] << " ";
    }

    // find paired element & output to console
    printf("\nPaired Elements Array: ");
    int* mainArrayPTR = array;
    int* pairedArrayPTR = pairedArray;

    for (int count = 0; count < half_LENGTH; count++) {
        *pairedArrayPTR = *(mainArrayPTR + 2 * count); // Copy every second element
        cout << *pairedArrayPTR << " ";
        pairedArrayPTR++;
    }

    // find minimum positive value encountered
    for (int count = 0; count < half_LENGTH; count++) {
        if (pairedArray[count] > 0 && pairedArray[count] < minPositive) {
            minPositive = pairedArray[count];
        }
    }
    cout << "\nMinimum positive value in paired array: " << minPositive;

    cin.get();
    return 0;
}