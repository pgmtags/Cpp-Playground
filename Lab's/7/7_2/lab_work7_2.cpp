// Performed by a student of specialty IPZ(SE), group 22k/1, Zyniuk A.A, 
// third option The task at hand: Create a C++ program that does the following: 
// Prints the information about the work performer (last name, initials, group, variant) and the task. 
// 3) Remove all odd words from 3 lines, and print all words in even positions inverted 
// (from the last character to the first). The words are separated from each other by spaces.

#include <iostream> 
#include <string>
#include <sstream>
#include <algorithm> 

using namespace std;

int main() {
    string text("Performed by a student of specialty IPZ(SE), group 22k/1, Zyniuk A.A, third option\n"
                "The task at hand: Create a C++ program that does the following: Prints the information about the work performer\n"
                "(last name, initials, group, variant) and the task.\n"
                "3) Remove all odd words from 3 lines, and print all words in even positions inverted\n"
                "(from the last character to the first). The words are separated from each other by spaces.");
    istringstream iss(text); // allows use input operations such as >> to retrieve data from the "text" string

    cout << "\nOriginal: \n\n" << text << "\n\n\n"; // output text without changes

    // output text using parameters

    cout << "Toasted: \n\n";
    int i = 0;
    string word;
    while (iss >> word) {
        if (i % 2 == 0) {
            reverse(word.begin(), word.end());
            cout << word << " ";
        } // else do nothing 
        i++;
    }

    return 0;
}
