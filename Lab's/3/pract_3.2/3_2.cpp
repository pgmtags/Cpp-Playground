#include <iostream>
#include <cmath>
#include <conio.h>

using namespace std;

double function_y(double x) {
    return (x - sqrt(x) + 2);
}

int main() {
    // За умовою (-10; 3), тому я просто виписав їх у a = -9, b = 2
    double a = -9, b = 2, h = 1.5, x = a; 

    cout << "Initial formula: y(x) = x - sqrt(x) + 2" << endl;

    // Обчислення та виведення значень функції для кожного кроку
    while (x <= b) {
        double y = function_y(x);
        cout << "y(" << x << ") = " << y << endl;
        x += h;  // Збільшення x на крок h
    }

    _getch();
}