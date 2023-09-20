#include <iostream>
#include <cmath>
#include <conio.h>

using namespace std;

int main() {
    double X;
    cout << "Enter X: ";
    cin >> X;

    double S = 0.0;

    for (int i = 1; i <= 10; ++i) {
        S += sqrt(2 * X) + i;
    }

    cout << "Summary: " << S << endl;

    _getch();

}
