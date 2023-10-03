#include <iostream>
#include <cmath>

using namespace std;

double calculate_y(double x) {
    if (x < 0) {
        cout << "Initial formula: y(x) = sqrt(|x + ln(x)| )\n";
        result =  sqrt(fabs(x + log10(x)));
    } else if (x > 3) {
        cout << "Initial formula: y(x) = pow(x, 3) + sqrt(3) )\n";
        result =  pow(x, 3) + sqrt(x);
    } else {
        cout << "Initial formula: y(x) = 0 )\n";
        result = (x + 1);
    }
    return result;
}

int main() {
    cout << "Zyniuk Andrij IPZ 22k/1, 3 var\n\n";

    double start = -10.0, end = 10.0, step = 1, current_x;

    cout << "Please, Enter X: ";
    cin >> current_x;

    // Calculate and display values of the function for each step
    while (current_x <= end) {
        cout << "y(" << current_x << ") = " << calculate_y(current_x) << endl;
        current_x += step;  // Increment x by the step
    }

    // Pause the program to view the results
    cin.get();
    return 0;
}
