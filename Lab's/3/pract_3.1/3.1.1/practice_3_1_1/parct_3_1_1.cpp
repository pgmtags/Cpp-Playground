//Зинюк Андрій Андрійович ІПЗ 22К\1, 3 Варіант

#include <iostream>
#include <cmath>
#include <conio.h>

using namespace std;

int main() {
    int X = 0;
    double S = 0.0;  // Initialize S to 0
    int i = 1;

    cout << "Please, Enter X: ";
    cin >> X;  // Use >> to read input into X

    cout << "Formula: S = \n";
    for (i; i <= 7; i++) {
        if (i != 1)
            cout << " + ";
        cout << "(" << i+2 << ") * sin(" << i << " * " << X << ")";
        S += (i + 2) * sin(i * X);
    }

    cout << "\n\nResult (S): " << S;

    _getch();  // Call _getch() with parentheses

    return 0;
}
