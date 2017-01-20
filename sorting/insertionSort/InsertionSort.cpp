#include <iostream>
#include "InsertionSort.h"

using namespace std;

/*
Insertion sort takes a reference to an input array of integers
Sorts array using insertion sort algorithm

Basic insertion sort algorithm:
Start with an array, containing a sorted subarray and an unsorted subarray
    Initial sorted subarray consists of arr[0] (the first element)
Each iteration, move one element from the unsorted subarray to the sorted
    Take element from unsorted and place in correct position in sorted

The algorithm is finished when there are no more unsorted elements
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
            int j = i - 1; // j is index of the end of the sorted subarray
            
            // Iterate backwards through sorted subarray until key is in correct location
            while (j >= 0 && arr[j] > key) {
                arr[j + 1] = arr[j]; // Move elements to right
                j--;
            }
            arr[j + 1] = key;
        }
    }
}

