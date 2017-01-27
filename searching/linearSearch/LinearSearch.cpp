#include <iostream>
#include "LinearSearch.h"

using namespace std;

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
