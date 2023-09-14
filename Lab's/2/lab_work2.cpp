#include <iostream>
#include <cmath>
#include <conio.h>

using namespace std;

int main() {
    float A, B, F1 = 0, F2 = 0, F3;  
    int C, VARIANT = 3;

    cout << "Please, enter number A, B, and an integer number: ";
    cin >> A >> B >> C;

    if (C > VARIANT) { F1 = tanh(A); } 
    else { F2 = sqrt(A); }
    F3 = pow(A, B);
    cout << "A: " << A << "\nB: " << B << "\nC: " << C << "\nVariant: " << VARIANT << "\nF1: " << F1 << "\nF2: " << F2 << "\nF3: " << F3 << endl;
    _getch();
}