// generate matrix 7x3, filter numbs whos < |12|

#include <iostream>
#include <cstdlib>
#include <random>

using namespace std;

int getRandom(int min, int max) {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> dist(min, max);
    return dist(gen);
}

int getAbsoluteValue(int number) {
    return (number < 0) ? -number : number;
}

int main() {
    const int ROW = 7, COLS = 3;

    // Allocating memory for the array
    float** data = new float*[ROW];
    for (int i = 0; i < ROW; i++) {
        data[i] = new float[COLS];
    }

    // Generate and count array
    int count_12 = 0;
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COLS; j++) {
            data[i][j] = getRandom(-24, 24);
            if (getAbsoluteValue(data[i][j]) < 12) {
                count_12++;
            }
        }
    }

    // Output main array
    cout << "Count whos < |12|: " << count_12 << "\nArray: \n";
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << data[i][j] << " ";
        }
        cout << endl;
    }

    // Delete 2D array
    for (int i = 0; i < ROW; i++) {
        delete[] data[i];
    }
    delete[] data;

    cin.get();
    return 0;
}