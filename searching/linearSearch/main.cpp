#include <iostream>
#include "LinearSearch.h"

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
    LinearSearch *search = new LinearSearch();

    // Example 1
    int arr[] = {3, 5, 1, 2, 6, 5, 6};
    int target = 2;
    int size = sizeof(arr)/sizeof(arr[0]); // Size of array in bytes/# bytes     per element
    cout << "Array: " << endl;
    print (arr, size);
    cout << "Target: " << target << endl;

    int index = search->linearSearch(arr, size, target);
    cout << "Index of target: " << index << endl;
    cout << endl;    
    // Example 2
    int arr2[] = {3, 3, 3, 3, 3, 5, 10, 78, 3, 1};
    target = 1;
    size = sizeof(arr2)/sizeof(arr2[0]);
    cout << "Array: " << endl;
    print (arr2, size);
    cout << "Target: " << target << endl;

    index = search->linearSearch(arr2, size, target);
    cout << "Index of target: " << index << endl;
    cout << endl;
    // Example 3
    int arr3[] = {3, 3, 3, 3, 3, 5, 10, 78, 3, 1};
    target = 4;
    size = sizeof(arr3)/sizeof(arr3[0]);
    cout << "Array: " << endl;
    print (arr3, size);
    cout << "Target: " << target << endl;

    index = search->linearSearch(arr3, size, target);
    cout << "Index of target: " << index << endl;
}
