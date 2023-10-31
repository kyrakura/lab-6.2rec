#include <iostream>
#include <iomanip>
#include <ctime>
#include <Windows.h>

using namespace std;

const int N = 25;

void Create(int a[], const int size, const int Low, const int High, int i) {
    if (i == size) {
        return;
    }
    a[i] = Low + rand() % (High - Low + 1);
    Create(a, size, Low, High, i + 1);
}

void Print(int a[], const int size, int i) {
    if (i == size) {
        cout << endl;
        return;
    }
    cout << setw(4) << a[i];
    Print(a, size, i + 1);
}

double MinMax(int a[], const int size, int i, int& min, int& max) {
    if (i == size) {
        return static_cast<double>(min + max) / 2.0;
    }

    if (a[i] < min) {
        min = a[i];
    }
    if (a[i] > max) {
        max = a[i];
    }

    return MinMax(a, size, i + 1, min, max);
}

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    srand((unsigned)time(NULL));
    int a[N];
    int Low = -11;
    int High = 13;

    Create(a, N, Low, High, 0);

    cout << "Початковий масив: ";
    Print(a, N, 0);

    int min = a[0];
    int max = a[0];
    double avgMinMax = MinMax(a, N, 0, min, max);
    cout << "Середнє арифметичне максимального та мінімального елементів: " << avgMinMax << endl;

    return 0;
}
