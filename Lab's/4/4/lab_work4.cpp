// Заданий одномірний масив a[10]. Знайти кількість від’ємних елементів масиву

#include <iostream>

using namespace std;

int main()
{
    const int STEPS = 10; // Кількість елементів у масиві
    int storage[STEPS]; // Оголошення масиву

    cout << "Please, Input the array elements:\n";

    // Введення елементів масиву
    for (int i = 0; i < STEPS; i++) {
        cout << "Storage[" << i << "] = ";
        cin >> storage[i];
    }

    cout << "\nThe inputted array:\n";

    // Виведення елементів масиву
    for (int i = 0; i < STEPS; i++) {
        cout << "Storage[" << i << "] = " << storage[i] << endl;
    }

    int negativeCount = 0; // Лічильник від'ємних елементів

    // Підрахунок кількості від'ємних елементів
    for (int i = 0; i < STEPS; i++) {
        if (storage[i] < 0) {
            negativeCount++;
        }
    }

    cout << "\nResult: " << negativeCount << " negative elements\n";

    return 0;
}
