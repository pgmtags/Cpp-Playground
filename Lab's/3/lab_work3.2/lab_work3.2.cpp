#include <iostream>
#include <cmath>

using namespace std;

double calculate_y(double x) {
    return (x - sqrt(x) + 2);
}

int main() {
    cout << "Zyniuk Andrij IPZ 22k/1, 3 var\n\n";

    double start = -9.0;
    double end = 2.0;
    double step = 1.5;
    double current_x = start;

    cout << "Initial formula: y(x) = x - sqrt(x) + 2\n";

    // Calculate and display values of the function for each step
    while (current_x <= end) {
        double y_value = calculate_y(current_x);
        cout << "y(" << current_x << ") = " << y_value << endl;
        current_x += step;  // Increment x by the step
    }

    // Pause the program to view the results
    cin.get();
    return 0;
}
