#include <iostream>
using namespace std;

int main() {
    float mass[15] = {1.2, 2.3, 1.11, 3.4, 5.5, 5.4, 5.3, 5.1, 1.5, 1.25, 5.41, 5.31, 5.11, 1.51, 1.251};

    for (int i = 1; i < 15; ++i) {
        for (int j = 0; j < 15-i; j++) {
            if (mass[j] > mass[j+1]) swap(mass[j], mass[j+1]);
        }
    }

    cout << "Отсортированный массив: ";
    for(int i = 0; i < 15; ++i) {
        cout << mass[i] << " ";
    }
    cout << endl;
    return 0;
}
