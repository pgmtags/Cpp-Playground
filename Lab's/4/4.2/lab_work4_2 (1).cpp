/*
3. Визначити мінімальними елемент серед додатніх елементів масиву, 
   який буде згенерований за рандомними параметрами
*/

#include <iostream>
#include <random>

using namespace std;

// function generator random chars
int randomInt(int min, int max) {
    random_device rd;
    mt19937 gen(rd());

    // distribution within a specified range
    uniform_int_distribution<int> dist(min, max);

    return dist(gen);
}

// function for sorting arrays and finding the minimum positive element
int bubbleSort(int arr[], int length) {
    int minPositive = INT_MAX; // initialize to a large value
    bool sorted = false;
    for (int i = 0; i < length - 1 && !sorted; i++) {
        sorted = true;
        for (int j = 0; j < length - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                sorted = false;
            }
        }
    }

    // find the minimum positive element while iterating
    for (int i = 0; i < length; i++) {
        if (arr[i] > 0 && arr[i] < minPositive) {
            minPositive = arr[i];
        }
    }
    
    return minPositive;
}

int main() {
    // setting variables 
    int LENGTH = randomInt(0, 256);
    int array[LENGTH];

    // filling the array in range [-128, 128]
    for (int i = 0; i < LENGTH; i++) {
        array[i] = randomInt(-128, 128);
    }

    // checking the ratio of the array to be sorted, and output the array to console, writing the numbers by < , >
    cout << "\nThe array has " << LENGTH << " numbers.";
    if (LENGTH == 0) {
        cout << "\nLength = 0, array doesn't have elements";
    } else if (LENGTH == 1) {
        cout << "\nLength has 1 element, array can't be sorted: " << array[0] << "\n";
    } else {
        cout << " The unsorted array itself: \n# ";
        for (int i = 0; i < LENGTH; i++) {
            cout << array[i];
            if (i < LENGTH - 1) {
                cout << ", ";
            }
        }

        int minPositive = bubbleSort(array, LENGTH);
        cout << "\nThe sorted array (smaller to bigger) itself: \n# ";
        for (int i = 0; i < LENGTH; i++) {
            cout << array[i];
            if (i < LENGTH - 1) { 
                cout << ", "; 
            } else { 
                cout << "\n"; 
            }
        }
        
        cout << "\nThe minimum positive element in the array: " << minPositive << "\n";
    }

    // waiting for Enter to be pressed
    cin.get();
    return 0;
}