// C++ Shell Sort Algorithm

#include <iostream>
using namespace std;

void shellSort(int arr[], int n) {

    // Start with a large gap, then reduce the gap
    for (int gap = n/2; gap > 0; gap /= 2) {

        // Do a gapped insertion sort
        for (int i = gap; i < n; i += 1) {

            // add arr[i] element to the gap sorted array
            // save arr[i] in temp make a hole at position i
            int temp = arr[i];

            // shift earlier gap-sorted elements up until the correct
            int j;

            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
                arr[j] = arr[j - gap];
            }

            // put temp to its correct location
            arr[j]= temp;
        }
    }
}