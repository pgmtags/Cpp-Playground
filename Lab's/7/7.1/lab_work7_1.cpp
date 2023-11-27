#include <iostream>
#include <string>

using namespace std;

string dellwords(const string& st, int n) {
    string result;
    string::const_iterator it = st.begin();
    
    enum State {
        SkipWhitespace,
        SkipWord,
        CopyText
    } state = SkipWhitespace;

    while (it != st.end()) {
        switch (state) {
            case SkipWhitespace:
                if (!isspace(*it)) {
                    if (n == 0) {
                        state = CopyText;
                        result += *it;
                    } else {
                        state = SkipWord;
                    }
                }
                break;
            case SkipWord:
                if (isspace(*it)) {
                    state = SkipWhitespace;
                    --n;
                }
                break;
            case CopyText:
                result += *it;
                break;
        }
        ++it;
    }
    return result;
}

int main() {
    string text=(string)"\n\n\n" +
                        "Performed by a student of specialty IPZ(SE), group 22k/1\nZyniuk A.A, third option\n\n" +
                        "The task at hand: \n" +
                        "Create a C++ program that does the following:\n" 
                        "Prints the information about the work performer (last name, initials, group, variant) and the task.\n\n" +
                        "3) Remove all odd words from 3 lines, and print all words in even positions inverted (from the last character to the first).\n" +
                        "The words are separated from each other by spaces." +
                        "\n\n\n";

    int n;
    cin >> n;
    cout << dellwords(text, n);


    //cout << text;
}