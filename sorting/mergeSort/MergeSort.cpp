#include <iostream>
#include "MergeSort.h"

using namespace std;

void mergeSort(int arr[], int l, int r) {
    if (l < r) {
        int m  = (l + r) / 2;
        // Call mergesort on subarray from l to midpoint
        mergeSort(arr, l, m);
        // Call mergesort on subarray from m + 1 to endpoint
        mergeSort(arr, m + 1, r);
        // Merge subarrays back
        merge(arr, l, m, r); 
    }
}

void merge(int arr[], int l, int m, int r) {
    // Num elements in left subarray
    int numLeft = m - l + 1;
    // Num elements in right subarray
    int numRight = r - m;

    // Create left and right subarrays
    int arrLeft[numLeft];
    for (int i = 0; i < numLeft; i++)
        arrLeft[i] = arr[l+i]; // Populate subarray
    
    int arrRight[numRight];
    for (int i = 0; i < numRight; i++)
        arrRight[i] = arr[m + 1 + i];

    // Merge
    int iLeft = 0; // Initial index left
    int iRight = 0; // Initial index right
    int iFull = l; // Initial index full array

    while (iLeft < numLeft && iRight < numRight) {
        // If element of left <= element of right, put element of left in arr
        if (arrLeft[iLeft] <= arrRight[iRight]) {
            arr[iFull] = arrLeft[iLeft];
            iLeft++;
        }
        else {
            arr[iFull] = arrRight[iRight];
            iRight++;
        }
        iFull++; // Element has been added to arr
    }
    // Finish adding numbers to arr
    while (iLeft < numLeft) {
        arr[iFull] = arrLeft[iLeft];
        iLeft++;
        iFull++;
    }
    while (iRight < numRight) {
        arr[iFull] = arrRight[iRight];
        iRight++;
        iFull++;
    }
}
