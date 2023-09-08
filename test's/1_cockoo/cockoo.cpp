#include <ctime>
#include <iostream>
#include <conio.h>

using namespace std;

// Function to get the current year
int getCurrentYear() {
    time_t now = time(0);
    tm *ltm = localtime(&now);
    return 1900 + ltm->tm_year;
}

int main() {
    int EnteredYear, UserYears;

    cout << "Please, enter your year of birth: ";
    cin >> EnteredYear;

    UserYears = getCurrentYear() - EnteredYear;

    for (int i = 0; i < UserYears; i++) {
        cout << i + 1 << ". Hello" << endl;
    }

    _getch();
}
