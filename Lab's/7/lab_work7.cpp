#include <iostream>
#include <string>

using namespace std;

int main() {
    string lastName, firstName, middleName;

    // Ввід з клавіатури
    cout << "Enter surname: ";
    cin >> lastName;

    cout << "Enter name: ";
    cin >> firstName;

    cout << "Enter patronymic: ";
    cin >> middleName;

    // Визначення довжини рядків
    int lastNameLength = lastName.length();
    int firstNameLength = firstName.length();
    int middleNameLength = middleName.length();

    // Виведення результату на екран
    cout << "\nName and initials: " << lastName << " " << firstName[0] << "." << middleName[0] << ".\n";

    // Визначення кількості літер 'а' в імені
    int aCount = 0;
    for (char c : firstName) {
        if (c == 'a' || c == 'A') {
            aCount++;
        }
    }

    cout << "Count 'a' in name: " << aCount << endl;

    // Додавання коментаря
    cout << "\nPerformed by a student of specialty IPZ(SE), group 22k/1." << endl;

    return 0;
}
