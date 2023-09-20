#include <iostream>
#include <iomanip>

using namespace std;

long long binomialCoefficient(int n, int k) {
    if (k == 0 || k == n)
        return 1;
    else
        return binomialCoefficient(n - 1, k - 1) + binomialCoefficient(n - 1, k);
}

void printPascalTriangle(int numRows) {
    for (int i = 0; i < numRows; ++i) {
        for (int j = 0; j <= i; ++j) {
            long long coef = binomialCoefficient(i, j);
            cout << setw(3) << coef << " ";
        }
        cout << endl;
    }
}

int main() {
    int numRows;
    cout << "Enter the number of rows for Pascal's Triangle: ";
    cin >> numRows;

    printPascalTriangle(numRows);

    return 0;
}