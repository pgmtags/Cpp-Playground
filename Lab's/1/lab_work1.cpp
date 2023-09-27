#include <iostream>
#include <limits>
#include <string>
#include <conio.h>

using namespace std;

int main() {
    cout << "Zyniuk Andrij IPZ 22k/1, 3 var\n\n";

    double A, B, C, sum;

    cout << "Please, enter number A, B, C: \n";
    cin >> A >> B >> C;

    cout << "Solution: " << (A * A / C) + (B / 1) * (4.0 / 3.0) << endl;

    _getch();
}
