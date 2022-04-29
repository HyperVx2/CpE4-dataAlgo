// C++ Quick Sort Algorithm
// Pivot is rightmost element

#include <iostream>
using namespace std;

// Function to swap two elements
void swap(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}

// Fuction to rearrange array
int partition(int arr[], int low, int high) {

    // select the rightmost element as pivot
    int pivot = arr[high];
    
    // pointer for greater element
    int i = (low - 1);

    // traverse each element of the array
    // compare it with the pivot
    for (int j = low; j < high; j++) {

        // if current element is smaller than pivot is found
        // swap it with the greater element pointed by i
        if (arr[j] < pivot) {
            
            // increment index of smaller element
            i++;

            // swap element at i with element at j
            swap(&arr[i], &arr[j]);
        }
    }

    // swap pivot with the greater element at i
    swap(&arr[i + 1], &arr[high]);
    // return the partition point
    return (i + 1);
}

void quickSort(int arr[], int low, int high) {

    if (low < high) {

        // pi is partitioning index, arr is now
        // now at right place
        int pi = partition(arr, low, high);
        
        // recursive call on both left and right of pivot
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}