// generate and output array [10] and fill random numbers in range (-140; 100)
// extract in new array paired !Elements!
// find min !Element! in positive
//
// variant 3, Andrij_Zyniuk

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    const int arraySize = 10;
    int* originalArray = new int[arraySize];
    srand(static_cast<unsigned int>(time(nullptr)));

    // Generate a random number in the range (-140, 100)
    for (int i = 0; i < arraySize; ++i) {
        originalArray[i] = rand() % 241 - 140;
    }

    // find paired elements
    int* pairedArray = new int[arraySize/2];
    int pairedCount = 0;

    for (int i = 0; i < arraySize; i += 2) {
        pairedArray[pairedCount] = originalArray[i];
        pairedCount++;
    }

    //Find the minimum positive element in the paired array
    int minPositive = INT_MAX; // Initialize to a large value

    for (int i = 0; i < pairedCount; ++i) {
        if (pairedArray[i] > 0 && pairedArray[i] < minPositive) {
            minPositive = pairedArray[i];
        }
    }

    cout << "MinPos: " << minPositive << endl;
    cout << "Original Array: ";
    for (int i = 0; i < arraySize; ++i) {
        cout << originalArray[i] << " ";
    }

    cout << "\nPaired Elements Array: ";
    for (int i = 0; i < pairedCount; ++i) {
        cout << pairedArray[i] << " ";
    }

    originalArray, pairedArray = nullptr;
    delete[] originalArray, pairedArray;

    cin.get();
    return 0;
}
