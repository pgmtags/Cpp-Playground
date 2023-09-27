#include <iostream>
#include <cmath>
#include <conio.h>

using namespace std;

double function_y(double x) {
    return (x - sqrt(x) + 2);
}

int main() {
    /*
    за умовою (-10; 3), тому я просто виписав їх у a = -9, b = 2
    */
    double a = -9;  // Початок інтервалу
    double b = 2;   // Кінець інтервалу
    double h = 1.5;  // Крок
    

    cout << "Initial formula: y(x) = x - sqrt(x) + 2" << endl;

    // Обчислення та виведення значень функції для кожного кроку
    for (double x = a; x <= b; x += h) {
        double y = function_y(x);

        cout << "y(" << x << ") = " << y << endl;
    }

    _getch();
}