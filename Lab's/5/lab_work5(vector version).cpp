#include <iostream>
#include <vector>
#include <random>

using namespace std;

int randomInt(int min, int max) {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> dist(min, max);
    return dist(gen);
} // randomInt(0, 256);

int main(){
    vector<int> array;
    int minPositive = INT_MAX; // Initialize to a large value

    // input in array random int
    for (int i = 0; i < 10; i++) { // 10 is starter 
        array.push_back(randomInt(-140, 100)); 
    }

    // remove non-paired elements
    vector<int> pairedArray;
    for (size_t i = 0; i < array.size(); i += 2) {
        pairedArray.push_back(array[i]);
    }

    // find the minimum positive element in the paired array
    for (size_t i = 0; i < array.size(); ++i) {
        if (pairedArray[i] > 0 && pairedArray[i] < minPositive) {
            minPositive = pairedArray[i];
        }
    }

    // output vector
    cout << "Original Vector: ";
    for (const int& i : array) {cout << i << "  ";}

    cout << "\nPaired Elements Array: ";
    for (const int& i : pairedArray) {cout << i << "  ";}

    cout << "\nMinPos Paired Vector's: " << minPositive << endl;

    cin.get();
    return 0;
}
