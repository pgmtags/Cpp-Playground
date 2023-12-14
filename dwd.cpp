#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main() {
    printf("Example 1. Strtok.\nWrite text and the program will split it at <! . , > to different fragments (if the text has highlighted pointers, of course)\n");
    string str;
    getline(cin, str);
    const char delim[] = ",.!";

    char* cstr = new char[str.length() + 1];
    strcpy(cstr, str.c_str());
    char* token = strtok(cstr, delim);
    while (token != NULL) {
        printf("Token: %s\n", token);
        token = strtok(NULL, delim);
    }
    delete[] cstr;

    printf("\nNow 2 example. Strlwr.\nThis command changes the case of all letters in the char array to lower case. Is everything clear?");
    char answer[3];
    cin >> answer;
    _strlwr(answer);

    if (strcmp(answer, "yes") == 0) {
        printf("That's great. You understood how the command works and, using your example, you verified that it accepts any form of answer yes (YEs, yEs)\n");
    }
    else if (strcmp(answer, "no") == 0) {
        printf("Well, in general, no matter how you wrote it (NO. nO for example), the program would still understand it, so for example it understood your answer\n");
    }
    else {
        printf("You should have written 'Yes or No' so that if something happened I could explain that no matter how you wrote it (YEs, or NO for example) it would still understand the answer, but okay\n");
    }
    printf("\nNow, example #3. Strncat\n Adding second row to first within the given symbols. \033[1;31m!Attention! \033[0mDo not set the number of characters that will be greater than the second row because this can cause serious harm to the system\nHere are two texts: \nHello,\nWorld!\nWrite the number of characters to copy: ");

    const char firstString[] = "Hello, ";
    const char secondString[] = "World!";
    char resultString[50];
    int Sanswer;

    cin >> Sanswer;
    strcpy(resultString, firstString);
    int charsToCopy = min(Sanswer, static_cast<int>(sizeof(secondString) - 1));

    strncat(resultString, secondString, charsToCopy);
    printf("Result String: %s\n", resultString);

    return 0;
}
