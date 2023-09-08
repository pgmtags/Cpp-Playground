/*
Написати програму, яка виводить послідовність з 100 рандомних числе в діапазоні(-100, 100), виводить індекс 3-ого від'ємного
*/

#include <iostream>
#include <random>
#include <conio.h>

using namespace std;

const int ARRAY_SIZE = 200;
const int MIN_VALUE = -100;
const int MAX_VALUE = 100;

int RANDOM() {
    static random_device rd;
    static mt19937 generator(rd());
    uniform_int_distribution<int> distribution(MIN_VALUE, MAX_VALUE);
    return distribution(generator);
}

int main() {
    int randomDigits[ARRAY_SIZE] = {};
    for (int i = 0; i < ARRAY_SIZE; i++) {
        randomDigits[i] = RANDOM();
        cout << randomDigits[i] << ", ";
    }

    cout << endl << "Third negative symbol is: " << randomDigits[ARRAY_SIZE - 3];
    _getch();
}