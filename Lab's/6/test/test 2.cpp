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

int main() {
    const int ROW = 5, COLS = 5;

    // Allocating memory for the array
    float** data = new float*[ROW];
    for (int i = 0; i < ROW; i++) {
        data[i] = new float[COLS];
    }
    
    // Generate and count array
    int pos = 0;
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COLS; j++) {
            data[i][j] = getRandom(-24, 24);
            if (data[i][j] > 0) {
                pos++;
            }
        }
    }

    // Output array
    cout << "Positive: " << pos <<"\nArray: \n";
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