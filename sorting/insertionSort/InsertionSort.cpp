#include <iostream>
#include "InsertionSort.h"

using namespace std;

/*
Insertion sort takes a reference to an input array of integers
Insertion sort runs in O(n^2) time

Basic insertion sort algorithm:
Start with an array, containing a sorted subarray and an unsorted subarray
    Initial sorted subarray consists of arr[0] (the first element)
Each iteration, move one element from the unsorted subarray to the sorted
    Take element from unsorted and place in correct position in sorted
The algorithm is finished when there are no more unsorted elements

Proof by loop invarient:
    1) Initialization: For-loop starts at i=1. Subarray arr[1, ... , i-1] is sorted (trivially)
    2) Maintinence: Before and after each iteration of the for-loop, subarray arr[1, ... , i-1] is sorted
    3) Termination: n = arr.length, therefore i = n+1 at loop termination. At loop invarient n+1, subarray arr[1, ... ,
    n+1-1] is sorted, therefore the entire array is sorted
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

