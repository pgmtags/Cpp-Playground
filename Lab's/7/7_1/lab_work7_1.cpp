#include "iostream"
#include "string.h"

#define MAX_NAME_LENGTH 100 // така деректива процессора, яка виконує функцію Const

using namespace std;

int main() {
  char lastName[MAX_NAME_LENGTH], firstName[MAX_NAME_LENGTH], middleName[MAX_NAME_LENGTH];

  // Ввід з клавіатури
  cout << "Enter surname: " << endl;
  cin >> lastName;

  cout << "Enter name: " << endl;
  cin >> firstName;

  cout << "Enter patranomic: " << endl;
  cin >> middleName;

  // Визначення довжини рядків
  int lastNameLength = strlen(lastName);
  int firstNameLength = strlen(firstName);
  int middleNameLength = strlen(middleName);

  // Виведення результату на екран
  printf("\nName and initials: %s %c.%c.\n", lastName, firstName[0], middleName[0]);

  // Визначення кількості літер 'a' в імені
  int aCount = 0;
  for (int i = 0; i < firstNameLength; i++) {
      if (firstName[i] == 'a' || firstName[i] == 'A') {
          aCount++;
      }
  }

  printf("Count 'a' in name: %d\n", aCount);

  // Додавання коментаря
  printf("\nPerformed by a student of specialty IPZ(SE), group 22k/1.\n");

  return 0;
}

