#include <iostream>
#include "BinarySearch.h"

using namespace std;

int BinarySearch::binarySearch(int arr[], int left, int right, int target) {
    if (left > right) 
        return -1;
    // Getting middle value from average of left and right
    // Integer division is a floor function
    int middle = (left + right) / 2;
    if (arr[m] == target) 
        return m;
    else if (arr[m] < target)
        return binarySearch(arr, middle + 1, right, target);
    else
        return binarySearch(arr, left, middle - 1, target);
}
