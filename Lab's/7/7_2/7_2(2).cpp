#include <cstring>
#include <iostream>

#define MAX_NAME_LENGTH 105

using namespace std;

// Function to prompt the user for a single letter
char promptForLetter(const string& prompt) {
  char letter;
  do {
      cout << prompt;
      cin >> letter;
  } while (cin.fail() || cin.get() != '\n');
  return letter;
}

// Function to prompt the user for the number of characters
size_t promptForNumChars(const string& prompt, size_t maxLength) {
  size_t numChars;
  do {
      cout << prompt;
      cin >> numChars;
  } while (cin.fail() || cin.get() != '\n' || numChars >= maxLength);
  return numChars;
}

// Function to perform strchr operation
void performStrchr(const char* text, char letter) {
  char* ch = strchr(text, letter);

  if (ch != nullptr) {
      cout << "The letter " << letter << " is at position " << ch - text << " using strchr." << endl;
  } else {
      cout << "The letter is not present in the text using strchr." << endl;
  }
}

// Function to perform strcspn operation
void performStrcspn(const char* text, char letter) {
  size_t pos = strcspn(text, &letter);

  if (text[pos] != '\0') {
      cout << "The first character not present in " << letter << " is at position " << pos << " using strcspn." << endl;
  } else {
      cout << "All characters are present in the text using strcspn." << endl;
  }
}

// Function to perform strncpy operation
void performStrncpy(const char* text, size_t numChars) {
  char destination[MAX_NAME_LENGTH];
  strncpy(destination, text, numChars);
  destination[numChars] = '\0'; // Null-terminate the destination string

  cout << "The first " << numChars << " characters from the text are: " << destination << endl;
}

int main() {
  char text[] = "Lorem ipsum dolor sit amet, qui minim labore adipisicing minim sint cillum sint consectetur cupidatat.";

  cout << "\n" << text;

  // Using strchr
  char letterStrchr = promptForLetter("\nEnter a letter to check for its presence in the text: ");
  performStrchr(text, letterStrchr);

  // Using strcspn
  char letterStrcspn = promptForLetter("\nEnter a letter to find the first unoccurrence in the text: ");
  performStrcspn(text, letterStrcspn);

  // Using strncpy
  size_t numChars = promptForNumChars("\nEnter the number of characters to copy from the beginning of the text: ", MAX_NAME_LENGTH);
  performStrncpy(text, numChars);

  return 0;
}

