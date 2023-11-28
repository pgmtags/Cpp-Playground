// Заданий одномірний масив a[10]. Знайти кількість від’ємних елементів масиву

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

int main() {
    const int Length = 10;
    int negativeCount, storage[Length];
    
    // filling the array
    cout << "Array: ";
    for (int i = 0; i < Length; i++) {
        storage[i] = randomInt(-100, 100);
        cout << storage[i] << " ";
        if (storage[i] < 0) { negativeCount++;  }
    }

    cout << "\nResult: " << negativeCount << " negative elements\n";

    return 0;
}

