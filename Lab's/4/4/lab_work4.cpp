// Заданий одномірний масив a[10]. Знайти кількість від’ємних елементів масиву

#include <iostream>

using namespace std;

int main() {
    const int STEPS = 10; // Кількість елементів у масиві
    int storage[STEPS]; // Оголошення масиву
    int negativeCount = 0; // Лічильник від'ємних елементів
    
    // Введення елементів масиву
    cout << "Please, Input the array elements:\n";
    for (int i = 0; i < STEPS; i++) {
        cout << "Storage[" << i << "] = ";
        cin >> storage[i];
    }

    // Виведення елементів масиву
    cout << "\nThe inputted array:\n";
    for (int i = 0; i < STEPS; i++) {
        cout << "Storage[" << i << "] = " << storage[i] << endl;
    }

    // Підрахунок кількості від'ємних елементів
    for (int i = 0; i < STEPS; i++) {
        if (storage[i] < 0) {
            negativeCount++;
        }
    }

    cout << "\nResult: " << negativeCount << " negative elements\n";
    
    cin.get();
    return 0;
}
