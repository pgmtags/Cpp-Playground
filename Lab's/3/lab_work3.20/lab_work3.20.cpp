#include <iostream>
#include <cmath>

using namespace std;

int main() {
    cout << "Zyniuk Andrij IPZ 22k/1, 3 var\n\n";

    const double start = -9.0;
    const double end = 2.0;
    const double step = 1.5;
    double current_x = start;

    // Calculate and display values of the function for each step
    cout << "Initial formula: y(x) = x - sqrt(x) + 2\n";
    while (current_x <= end) {
        double y_value = current_x - sqrt(current_x) + 2;
        cout << "y(" << current_x << ") = " << y_value << endl;
        current_x += step;  // Increment x by the step
    }

    // Pause the program to view the results
    cin.ignore();
    cin.get();
    return 0;
}
