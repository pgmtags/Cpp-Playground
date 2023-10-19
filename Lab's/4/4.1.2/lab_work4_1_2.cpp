// Заданий одномірний масив a[10]. Знайти кількість від’ємних елементів масиву

#include <iostream>

using namespace std;

int main() {
    const int STEPS = 10; // Кількість елементів у масиві
    int storage[STEPS]; // Оголошення масиву
    int negativeCount = 0; // Лічильник від'ємних елементів
    
    // Введення елементів масиву та підрахунок негативних елементів
    cout << "Please, Input the array elements:\n";

    for (int i = 0; i < STEPS; i++) {
        cout << "Storage[" << i << "] = ";
        cin >> storage[i];
        if (storage[i] < 0) { 
            negativeCount++; //Таймер від'ємних чисел
        }
    }
    cout << "\nResult: " << negativeCount << " negative elements\n";
    
    cin.get();
    return 0;
}