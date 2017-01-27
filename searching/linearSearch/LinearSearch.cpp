#include <iostream>
#include "LinearSearch.h"

using namespace std;

/*
Linear search takes an array of ints, size of array, and target
Linear search runs in O(n) time
    Worst case, the algorithm searches through n elements

Basic linear search algorithm:
Ensure array is not empty
Sequentially search through every element in array until target is found or the entire array has been searched
Returns the index of target, or -1 if target is not in array
*/
int LinearSearch::linearSearch(int arr[], int size, int target) {
    // If array is empty return -1
    if (size == 0) {
        return -1;
    }
    // If array is not empty, search
    else {
        // Search through every element
        for (int i = 0; i < size; i++) {
            if (arr[i] == target)
                return i;
        }
        // If target isn't in array, return -1
        return -1;
    }
}
