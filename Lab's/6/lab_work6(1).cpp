#include <iostream>
#include <vector>
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

    // Generate and count array using vectors
    vector<vector<float>> data(ROW, vector<float>(COLS));
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

    return 0;
}
