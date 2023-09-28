#include <iostream>
#include <cmath>

using namespace std;

double function_y(double x) {
    return (x - sqrt(x) + 2);
}

int main() {
    double a = -9;  // Початок інтервалу
    double b = 2;   // Кінець інтервалу
    double h = 1.5;  // Крок

    cout << "Initial formula: y(x) = x - sqrt(x) + 2" << endl;

    // Обчислення та виведення значень функції для кожного кроку
    for (double x = a; x <= b; x += h) {
        double y = function_y(x);

        cout << "y(" << x << ") = " << y << endl;
    }

    return 0;
}