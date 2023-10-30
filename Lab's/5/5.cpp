#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    srand(time(NULL));
    int n = rand();
    int arr[n];
    int *ptr = arr;

    // filling the array
    for (int i = 0; i < n; i++) { arr[i] = rand(); }

    //// output the array to console
    //printf("Array: ");
    //for (int i = 0; i < n; i++) { cout << arr[i] << " "; }

    // output the array to console
    for (int *ptr = &arr[0]; ptr < &arr[n]; ptr++) {
        printf("%d ", *ptr); // Вивести значення, на яке вказує вказівник
    }

    cin.get();
    return 0;
}