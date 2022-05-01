#include <iostream>
#include <cstdlib> // rand()
#include <ctime> // srand()

#include "act2_functions.hpp"

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

    int arr[20], n = 20;
    int uInput, result, x;

    // generate random set of numbers (<32)
    for (int i = 0; i < n; i++) {
        arr[i] = (rand() % 32);
    }

    cout << "Current array: ";
    printArray(arr, n);

    cout << "Choose your searching algorithm:\n";
    cout << "1 LinearSearch\n";
    cout << "2 BinarySearch\n";
    cout << "Insert num (1-2): ";

    cin >> uInput;

    cout << "\nWhat number to find?: ";
    cin >> x;

    switch(uInput) {
        case 1:
            result = search(arr, n, x);

            (result == -1)
                ? cout << "Element not found."
                : cout << "Element is present at index " << result;
            break;
        case 2:
           result = binarySearch(arr, 0, n - 1, x);

           (result == -1)
                ? cout << "Element not found."
                : cout << "Element is present at index " << result;
            break;
        default:
            cout << "Invalid input. Closing program.";
    }

    return 0;
}