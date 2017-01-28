#include <iostream>
#include "BinarySearch.h"

using namespace std;

/*
Binary search takes an array of ints, left and right bounds of the search, and the target to search for
Binary search runs in O(log(n)) time
Binary search only works with sorted data

Basic binary search algorithm:
The algorithm will find the midpoint between the left and right bounds passed
It then checks if the value at the middle index is equal to the target
    If yes, return the current index
    If target is greater than middle value, it calls binarySearch with left bound being middle + 1
    If target is less than middle value, it calls binarySearch with right bound being middle -1
The algorithm will effectively halve the subarray at every recursive call, eventually getting to a base case where the
subarray has a size of 1
If the single element doesn't match, binarySearch will be called again with left > right, which will return -1
*/

int BinarySearch::binarySearch(int arr[], int left, int right, int target) {
    if (left > right) 
        return -1;
    // Getting middle value from average of left and right
    // Integer division is a floor function
    int middle = (left + right) / 2;
    if (arr[middle] == target) 
        return middle;
    else if (arr[middle] < target)
        return binarySearch(arr, middle + 1, right, target);
    else
        return binarySearch(arr, left, middle - 1, target);
}
