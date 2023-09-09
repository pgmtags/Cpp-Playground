/*
Написати програму, яка виводить послідовність з 10 рандомних числе в діапазоні(-100, 100), виводить різницю між MIN та MAX значенням масиву
*/
#include <iostream>
#include <random>
#include <algorithm>
#include <conio.h>

using namespace std;

const int ARRAY_SIZE = 10;
const int MIN_VALUE = -100;
const int MAX_VALUE = 100;

int randomDigits[ARRAY_SIZE] = {};
int minVal, maxVal = randomDigits[0];

int main() {
    random_device rd;
    mt19937 generator(rd());
    uniform_int_distribution<int> distribution(MIN_VALUE, MAX_VALUE);

    // Генерація 10 рандомних чисел
    for (int i = 0; i < ARRAY_SIZE; i++) {
        randomDigits[i] = distribution(generator);
        cout << randomDigits[i] << ", ";
    }

    // Пошук максимального та мінімального значення
    for (int i = 1; i < ARRAY_SIZE; i++) {
        if (randomDigits[i] < minVal) {
            minVal = randomDigits[i];
        }
        if (randomDigits[i] > maxVal) {
            maxVal = randomDigits[i];
        }
    }

    cout << "\n\nMin: " << minVal << " Max: " << maxVal << "\nDifference between MIN and MAX values: " << maxVal - minVal << endl;

    _getch();
}