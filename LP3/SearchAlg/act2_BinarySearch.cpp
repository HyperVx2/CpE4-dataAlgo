#include <iostream>
using namespace std;

// A recursive binary search function
// It retuns location of x in given array
// if not, -1
int binarySearch(int arr[], int low, int high, int x) {

    if (high >= low) {
        int mid = low + (high - low) / 2;

        // If found at mid, return it
        if (arr[mid] == x) {
        return mid;
        }

        // Search the left half
        if (arr[mid] > x) {
            return binarySearch(arr, low, high, mid - 1);
        }

        // Search the right half
        return binarySearch(arr, low, high, mid + 1);
    }

    return -1;
}