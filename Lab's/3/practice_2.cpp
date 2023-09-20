#include <iostream>
#include <vector>

using namespace std;

// Функция для вычисления факториала
int factorial(int n) {
    if (n <= 1)
        return 1;
    else
        return n * factorial(n - 1);
}

// Функция для вывода отцентрированного треугольника Пифагора в массив
void generatePifagoreanTriangle(int n) {
    vector<vector<int>> triangle(n, vector<int>(n, 0));

    // Заполнение треугольника Пифагора
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j <= i; ++j) {
            triangle[i][j] = factorial(i) / (factorial(j) * factorial(i - j));
        }
    }

    // Вывод отцентрированного треугольника Пифагора
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n - i - 1; ++j)
            cout << " ";
        for (int j = 0; j <= i; ++j)
            cout << triangle[i][j] << " ";
        cout << "\n";
    }
}

int main() {
    int n;
    cout << "Please, Enter N: ";
    cin >> n;

    generatePifagoreanTriangle(n);

    return 0;
}
