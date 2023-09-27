#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    cout << "Zyniuk Andrij IPZ 22k/1, 3 var\n\n";

    int N, X;
    cout << "Enter the value of N: ";
    cin >> N;

    cout << "Formula: X = ";
    for (int i = 0; i < 5; i++) {
        if (i != 0)
            cout << " * ";
        cout << (N + i);
        X *= (N + i);
    }

    cout << "\n\nResult (X) for N = " << N << " is: " << X << endl;

    _getch();
}
