
#include <iostream>
#include "BinarySearch.h"

using namespace std;

// Helper function to print array
void print(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (i < size - 1)
            cout << arr[i] << ", ";
        else
            cout << arr[i] << endl;
    }
}

int main() {
    BinarySearch *search = new BinarySearch();

    // Example 1
    int arr[] = {0,2,3,4,4,4,4,5,6,7,8,9,5,55};
    int target = 0;
    int size = sizeof(arr)/sizeof(arr[0]); // Size of array in bytes/# bytes     per element
    cout << "Array: " << endl;
    print (arr, size);
    cout << "Target: " << target << endl;

    int index = search->binarySearch(arr, 0, size - 1, target);
    cout << "Index of target: " << index << endl;
    cout << endl;    
    // Example 2
    int arr2[] = {3, 3, 3, 3, 3, 5, 10, 78,79};
    target = 78;
    size = sizeof(arr2)/sizeof(arr2[0]);
    cout << "Array: " << endl;
    print (arr2, size);
    cout << "Target: " << target << endl;

    index = search->binarySearch(arr2, 0, size - 1, target);
    cout << "Index of target: " << index << endl;
    cout << endl;
    // Example 3
    int arr3[] = {0,1};
    target = 4;
    size = sizeof(arr3)/sizeof(arr3[0]);
    cout << "Array: " << endl;
    print (arr3, size);
    cout << "Target: " << target << endl;

    index = search->binarySearch(arr3, 0, size - 1, target);
    cout << "Index of target: " << index << endl;
}
