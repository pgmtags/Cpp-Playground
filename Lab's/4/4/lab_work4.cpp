// Заданий одномірний масив a[10]. Знайти кількість від’ємних елементів масиву

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    printf('Please, Enter 10 chars: \n')
    for (int i = 0;  i < STEPS; i++) {
        cin >> storage[i];
        if (storage[i] >= 0) {
            
        }
    }
}


#include <iostream>
using namespace std;
int main()
{
    int STEPS = 10, storage[STEPS];

    int i, summa = 0;
    printf(" Input the array elements\n");

    for (i = 0; i < STEPS; i++) {
        cout << "a[" << i << "]=";
        cin >> a[i]; //введення елементів масиву
    }

    cout << "\n The inputted array\n";

    for (i = 0; i < STEPS; i++){
        cout << "a[" << i << "]=" << a[i] << endl; //виведення елементів
    }

    for (i = 0; i < STEPS; i++) {
        if (a[i] < 0){
            summa = summa + a[i]; //знаходження суми від'ємних елементів
        }
    }
    cout << "\n summa= " << summa << endl;
    return 0;
}
