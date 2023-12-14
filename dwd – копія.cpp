#include <iostream>
#include <cstring>

int main() {
    // Example for strcspn
    const char str1[] = "Hello, World!";
    const char str2[] = "o";

    size_t length = strcspn(str1, str2);
    std::cout << "Length of initial segment without 'o' in str1: " << length << std::endl;

    // Example for strset
    char str3[] = "Replace";
    strset(str3, 'X');
    std::cout << "After strset: " << str3 << std::endl;

    // Example for strspn
    const char str4[] = "ABCDEF";
    const char str5[] = "AEIOU";

    size_t span = strspn(str4, str5);
    std::cout << "Length of initial segment with only 'AEIOU' in str4: " << span << std::endl;

    return 0;
}
