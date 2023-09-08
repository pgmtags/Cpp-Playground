#include <iostream>
#include <limits>
#include <string>
#include <conio.h>

using namespace std;

// Функція для введення числа з перевіркою
double getInput(const string &prompt) {
    double value;
    while (true) {
        cout << prompt;
        if (cin >> value) {
            break;
        } else {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please enter a number." << endl;
        }
    }
    return value;
}

int main() {
    double A, B, C, sum;
    cout << "Zyniuk Andrij IPZ 22k/1, 3 var" << endl;

    A = getInput("Please, enter number A: ");
    B = getInput("Please, enter number B: ");
    C = getInput("Please, enter number C: ");
    cout << "Solution: " << (A * A / C) + (B / 1) * (4.0 / 3.0) << endl;

    _getch();
}
