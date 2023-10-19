#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

int main(){
    // сброс генератора
    srand(time(0));

    const int arraySize = 10;
    double mas[arraySize];
    
    for (int i = 0; i < arraySize; i++){
        int randomValue = rand() % 51 - 20;
        mas[i] = cos(randomValue);

        cout << "mas[" << i << "] = " << mas[i] << ", cos(" << randomValue << ") = " << cos(randomValue) << "\n\n";
    }
}