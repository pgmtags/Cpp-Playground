/*
Написати программу. яка виводить суму 10 рандомних чисел у зоні (1, 10)
*/

#include <iostream>
#include <random>
#include <numeric>
#include <conio.h>

using namespace std;

const int ARRAY_SIZE = 10;
const int MIN_VALUE = 1;
const int MAX_VALUE = 10;
int randomDigits[ARRAY_SIZE] = {};

int main() {
    random_device rd;
    mt19937 generator(rd());
    uniform_int_distribution<int> distribution(MIN_VALUE, MAX_VALUE);

    // Генерація 10 рандомних чисел
    for (int i = 0; i < ARRAY_SIZE; i++) {
        randomDigits[i] = distribution(generator);
        cout << randomDigits[i] << ", ";
    }

    cout << endl << "Sum all digits : " << accumulate(begin(randomDigits), end(randomDigits), 0, plus<int>()) << endl;
    _getch();
}