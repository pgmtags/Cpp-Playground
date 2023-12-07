#include <iostream>
#include <random>

int getRandom(int min, int max) {
  std::random_device rd;
  std::mt19937 gen(rd());
  std::uniform_int_distribution<int> dist(min, max);
  return dist(gen);
}

void work1(){
  std::cout << "You chose Laboratory Work 1\n";
  // Add the code for the first laboratory work here
}

// Add other work functions as needed

void menu(short CHOOSE){
  switch (CHOOSE){
    case 1:
      work1();
      break;
    // Add cases for other laboratory works as needed
    default:
      std::cout << "Invalid choice. Please choose a valid laboratory work.\n";
  }
}

int main(){
  short CHOOSE;
  std::cout << "Performed by a student of specialty IPZ(SE), group 22k/1, Zyniuk A.A, third option\n\nChoose laboratory work: ";
  std::cin >> CHOOSE;

  menu(CHOOSE);

  return 0;
}

