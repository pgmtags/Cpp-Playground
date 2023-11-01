// creat arr var * 10, fill chars in range -100, 100
// sum + elements in arr

// 3 Var

#include <iostream>
#include <cstdlib>

using namespace std;

#include <iostream>

int main() {
    const int n = 30;
    int arr[n];
    int sum;

    // filling the array
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 201 - 100;
    }
    
    // find positive chars
    cout << "All positive chars: \n";
    for (int *ptr = &arr[0]; ptr < &arr[n]; ptr++) {
        if (*ptr > 0) {
            cout << *ptr << "\n";
        }
    }

    cin.get();
    return 0;
}