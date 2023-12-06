// examples using (strchr, strcspn, strncpy)


#include <cstring>
#include <iostream>

#define MAX_NAME_LENGTH 105

using namespace std;

int main() {
  char letters[MAX_NAME_LENGTH], text[] = "Lorem ipsum dolor sit amet, qui minim labore adipisicing minim sint cillum sint consectetur cupidatat.";
  
  cout << "\n" << text;

  // Using strchr, returns a pointer to the first occurrence of character in the C string str.
  // here implemented a search for a letter and returning its position from the left
  cout << "\nEnter a letter to check for its presence in the text: ";
  if (cin >> letters && strlen(letters) == 1) {
    char* ch = strchr(text, letters[0]);

    if (ch != nullptr) {
      cout << "The letter " << letters << " is at position " << ch - text << " using strchr." << endl;
    } else {
      cout << "The letter is not present in the text using strchr." << endl;
    }
  } else {
    cout << "Invalid input for letters. Please enter a single letter." << endl;
    return 1;
  }

  // Using strcspn, determining the position of the first character in the text
  // of a string that does not appear in the string
  size_t pos;
  cout << "\nEnter a letter to find the first unoccurrence in the text: ";
  if (cin >> letters && strlen(letters) == 1) {
    pos = strcspn(text, letters);
    if (text[pos] != '\0') {
      cout << "The first character not present in " << letters << " is at position " << pos << " using strcspn." << endl;
    } else {
      cout << "All characters are present in the text using strcspn." << endl;
    }
  } else {
    cout << "Invalid input for letters. Please enter a single letter." << endl;
    return 1;
  }

  // Using strncpy, copies the character from the source to the destination
  // here implemented the output of the text given given first
  size_t numChars;
  char destination[MAX_NAME_LENGTH];
  cout << "\nEnter the number of characters to copy from the beginning of the text: ";
  if (cin >> numChars && numChars < MAX_NAME_LENGTH) {
    strncpy(destination, text, numChars);
    destination[numChars] = '\0'; // Null-terminate the destination string

    cout << "The first " << numChars << " characters from the text are: " << destination << endl;
  } else {
    cout << "Invalid input for the number of characters. Please enter a valid number less than " << MAX_NAME_LENGTH << "." << endl;
    return 1;
  }

  return 0;
}

