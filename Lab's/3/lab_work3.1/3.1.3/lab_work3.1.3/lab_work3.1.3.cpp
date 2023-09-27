//Зинюк Андрій Андрійович ІПЗ 22К\1, 3 Варіант
#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    int N;
    long long X = 1;
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
