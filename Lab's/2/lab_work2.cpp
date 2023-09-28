#include <iostream>
#include <cmath>

using namespace std;

int main() {
    cout << "Zyniuk Andrij IPZ 22k/1, 3 var\n\n";

    float A, B, F1 = 0, F2 = 0;  
    int C, VARIANT = 3;

    cout << "Please, enter number A, B, and an integer number: ";
    cin >> A >> B >> C;

    if (C > VARIANT) { F1 = tanh(A); } 
    else { F2 = sqrt(A); }

    cout << "A: " << A << "\nB: " << B << "\nC: " << C << "\nVariant: " << VARIANT << "\nF1: " << F1 << "\nF2: " << F2 << "\nF3: " << pow(A, B) << endl;

    cin.get();
    return 0;
}