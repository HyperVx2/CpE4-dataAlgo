// C++ Shell Sort Algorithm
#include <iostream>
#include <cstdlib> // rand()
#include <ctime> // srand()

#include "act1_functions.hpp"

using namespace std;

void printArray(int arr[], int n) {
    cout << "[ ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "]\n";
}

int main() {
    srand((unsigned) time(0)); // seed for random generator each run

    int arr[10], n = 10;
    int uInput;

    // generate random set of numbers (<32)
    for (int i = 0; i < n; i++) {
        arr[i] = (rand() % 32);
    }

    cout << "Current array: ";
    printArray(arr, n);

    cout << "Choose your sorting algorithm:\n";
    cout << "1 HeapSort\n";
    cout << "2 QuickSort\n";
    cout << "3 ShellSort\n";
    cout << "Insert num (1-3): ";

    cin >> uInput;

    switch(uInput) {
        case 1:
            heapSort(arr, n);

            cout << "Sorted array (heapSort): ";
            printArray(arr, n);
            break;
        case 2:
           quickSort(arr, 0, n - 1);

           cout << "Sorted array (quickSort): ";
           printArray(arr, n);
            break;
        case 3:
            shellSort(arr, n);

            cout << "Sorted array (shellSort): ";
            printArray(arr, n);
            break;
        default:
            cout << "Invalid input. Leaving program.";
    }

    return 0;
}