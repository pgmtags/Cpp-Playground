#include <iostream>
#include <cstring>
using namespace std;
int main() {

  char str[] = "IkenyI";
  cout << "Position of the first character $$$ ";
  cout << strcspn(str, "$$$") << std::endl;

  cout << "The line after replacing with @: ";
  cout << strset(str, '@') << std::endl;
  // По логіці воно працює, ала не працює на практиці
  cout << "& characters at the beginning: ";
  cout << strspn(str, "&") << std::endl;

  return 0;
}
