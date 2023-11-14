// generate matrix 7x3, output matrix, delete ROW(K), and output without ROW(K)

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

void deleteRow(float**& data, int& ROW, int COLS, int rowIndexToDelete) {
    // Checking for correctness of the string index for deletion
    if (rowIndexToDelete < 0 || rowIndexToDelete >= ROW) {
        cout << "Invalid row index to delete.\n";
        return;
    }

    // Allocating new memory for an array with decreasing number of rows
    float** newData = new float*[ROW - 1];
    for (int i = 0, newRow = 0; i < ROW; ++i) {
        // Пропускаем строку для удаления
        if (i == rowIndexToDelete) {
            continue;
        }

        // Copy strings from the old array to the new array
        newData[newRow] = new float[COLS];
        for (int j = 0; j < COLS; ++j) {
            newData[newRow][j] = data[i][j];
        }

        ++newRow;
    }

    // Removing an old array
    for (int i = 0; i < ROW; ++i) {
        delete[] data[i];
    }
    delete[] data;

    // Update pointer to new array and number of rows
    data = newData;
    --ROW;
}

int main() {
    int ROW, COLS, K;

    cout << "Enter K: \n";
    cin >> K;
    cout << "\nEnter (row, columns) matrix: \n";
    cin >> ROW >> COLS;

    // Allocating memory for the array
    float** data = new float*[ROW];
    for (int i = 0; i < ROW; i++) {
        data[i] = new float[COLS];
    }

    // Generate array
    int count_12 = 0;
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COLS; j++) {
            data[i][j] = getRandom(-24, 24);
        }
    }

    // Output array with/without ROW K
    cout << "\nArray: \n";
    for (int i = 0, rowCounter = 1; i < ROW; i++, rowCounter++) {
        cout << "Row " << rowCounter << ": ";
        for (int j = 0, colCounter = 1; j < COLS; j++, colCounter++) {
            cout << data[i][j] << " ";
        }
        cout << endl;
    }

    deleteRow(data, ROW, COLS, K);

    cout << "\nArray after deleting row " << K << ": \n";
    for (int i = 0, rowCounter = 1; i < ROW; i++, rowCounter++) {
        cout << "Row " << rowCounter << ": ";
        for (int j = 0, colCounter = 1; j < COLS; j++, colCounter++) {
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