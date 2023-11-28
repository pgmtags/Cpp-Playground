// Дано одновимірний масив a, який містить n елементів
// Знайти кількість максимальних елементів масиву


#include <iostream>
#include <random>

using namespace std;


// function generator random chars
int randomInt(int min, int max) {
    random_device rd;
    mt19937 gen(rd());

    // distribution within a specified range
    uniform_int_distribution<int> dist(min, max);

    return dist(gen);
}

int main() {
    const int MIN = -10, 
                    MAX = 10, 
                    STEPS = randomInt(0, MAX);
    int maxCount = 0, 
         storage[STEPS]; 

    for (int i = 0; i < STEPS; i++) {
        storage[i] = randomInt(MIN, MAX);
        cout << "Storage[" << i << "] = " << storage[i] << endl;
        if (storage[i] == MAX) { maxCount++; }
    }
    
    cout << "\nResult: " << maxCount << " max elements\n";

    return 0;
}