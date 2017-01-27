#include <iostream>
#include "InsertionSort.h"

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
    InsertionSort *sort = new InsertionSort();
    
    // Example 1
    int arr[] = {3, 5, 1, 2, 6, 5, 6};
    int size = sizeof(arr)/sizeof(arr[0]); // Size of array in bytes/# bytes     per element
    cout << "Unsorted array: " << endl;
    print(arr, size);

    sort->insertionSort(arr, size);

    cout << "Sorted array: " << endl;
    print(arr, size);
    cout << endl;
    // Example 2
    int arr2[] = {1,2,3,4,5,4,3,2,12,3};
    size = sizeof(arr2)/sizeof(arr2[0]); // Size of array in bytes/# bytes     per element
    cout << "Unsorted array: " << endl;
    print(arr2, size);

    sort->insertionSort(arr2, size);

    cout << "Sorted array: " << endl;
    print(arr2, size);
    cout << endl;
    // Example 3
    int arr3[] = {1,1,1,2,3,4,5,10};
    size = sizeof(arr3)/sizeof(arr3[0]); // Size of array in bytes/# bytes     per element
    cout << "Unsorted array: " << endl;
    print(arr3, size);

    sort->insertionSort(arr3, size);

    cout << "Sorted array: " << endl;
    print(arr3, size);
}
