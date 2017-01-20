#include <iostream>
#include "InsertionSort.h"

using namespace std;

/*
Insertion sort takes a reference to an input array of integers
Sorts array using insertion sort algorithm
*/
void InsertionSort::insertionSort(int arr[], int size) {
    // if size is 0 or 1, the array is already sorted
    if (size == 0 || size == 1) {
        return;
    }
    else {
        // Initially "sorted" subarray consists of first element
        // Iterate through all unsorted elements
        for (int i = 1; i < size; i++) {
            int key = arr[i]; // Next element to place in sorted array
            int j = i - 1;
            
            // Iterate backwards through sorted subarray until key is in correct location
            while (j >= 0 && arr[j] > key) {
                arr[j + 1] = arr[j]; // Move elements to right
                j--;
            }
            arr[j + 1] = key;
        }
    }
}
