#include <iostream>
#include <cmath>

using namespace std;

double calculate_y(double x) {
    if (x < 0) {
        cout << "Initial formula: y(x) = sqrt(|x + ln(x)| )\n";
        return sqrt(fabs(x + log10(x)));
    } else if (x > 3) {
        cout << "Initial formula: y(x) = pow(x, 3) + sqrt(3)\n";
        return pow(x, 3) + sqrt(3);
    } else {
        cout << "Initial formula: y(x) = 0\n";
        return x + 1;
    }
}

int main() {
    const double start = -10;
    const double end = 10;
    const double step = 1;
    double current_x;

    cout << "Zyniuk Andrij IPZ 22k/1, 3 var\n\nPlease enter X: ";
    cin >> current_x;

    while (current_x > end || current_x < start) {
        cout << "Please enter a number in the range (-10, 10): ";
        cin.clear();
        cin.ignore();
        cin >> current_x;
    }

    do {
        cout << "y(" << current_x << ") = " << calculate_y(current_x) << endl;
        current_x += step;
    } while (current_x <= end);

    // Pause the program to view the results
    cin.ignore();
    cin.get();
    return 0;
}