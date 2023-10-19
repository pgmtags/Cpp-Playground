/*
3. Визначити мінімальними елемент серед додатніх елементів масиву, 
   який буде згенерований за рандомними параметрами
*/

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    srand(time(0));
    int n = rand();

    // filling the array
    int arr[n];
    for (int i = 0; i < n; i++) {
        arr[i] = rand();  // Генеруємо числа в діапазоні від -50 до 50
    }

    // find the minimum element
    int minPositive = INT_MAX; // Ініціалізуємо мінімальне значення INT_MAX
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0 && arr[i] < minPositive) {
            minPositive = arr[i];
        }
    }

    // output the array to console
    cout << "Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // find the minimum positive element
    if (minPositive == INT_MAX) {
        cout << "There are no positive elements in the array." << endl;
    } else {
        cout << "Minimum positive element: " << minPositive << endl;
    }

    // waiting for Enter to be pressed
    cin.get();
    return 0;
}
