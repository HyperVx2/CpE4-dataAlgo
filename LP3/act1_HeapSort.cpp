// C++ Heap Sort Algorithm
#include <iostream>
using namespace std;

// Heapify a subtree rooted with node i which is
// an index in arr[]. n is the size of heap
void heapify(int arr[], int n, int i) {

    // Find largest among root, left child and right child
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;

    // If left child is larger than root
    if (l < n && arr[l] > arr [largest]) {
        largest = l;
    }

    // If right child is larger
    if (r < n && arr[r] > arr[largest]) {
        largest = r;
    }

    // If largest is not root
    if (largest != i) {
        swap(arr[i], arr[largest]);

        // Recursively heapify the subtree
        heapify(arr, n, largest);
    }
}

// Main function to do heap sort
void heapSort(int arr[], int n) {
    // Build max heap
    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(arr, n, i);
    }

    // Heap sort
    for (int i = n  - 1; i > 0; i--) {
        // Move current root to end
        swap(arr[0], arr[i]);

        // Call to get the highest element at root again
        heapify(arr, i, 0);
    }
}