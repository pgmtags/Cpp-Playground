#include <iostream>
#include <random>
#include <cmath>

int getRandom(int min, int max) {
  std::random_device rd;
  std::mt19937 gen(rd());
  std::uniform_int_distribution<int> dist(min, max);
  return dist(gen);
}

void work1(){
  int A = 5;
  int B = 5;
  int C = 5;
  std::cout << "\nYou choose Laboratory Work 1\nA: 5, B: 5, C: 5\nSolution: " << (A * A / C) + (B / 1) * (4.0 / 3.0) << "\n";
  // Add the code for the first laboratory work here
}

void work2(){
  float A, B, F1 = 0, F2 = 0;  
  int C, VARIANT = 3;
  if (C > VARIANT) { F1 = tanh(A); } 
  else { F2 = sqrt(A); }
  std::cout << "A: " << A << "\nB: " << B << "\nC: " << C << "\nVariant: " << VARIANT << "\nF1: " << F1 << "\nF2: " << F2 << "\nF3: " << pow(A, B) << std::endl;
}

// Add other work functions as needed

void menu(short CHOOSE){
  switch (CHOOSE){
    case 1:
      work1();
      break;
    case 2:
      work2();
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

