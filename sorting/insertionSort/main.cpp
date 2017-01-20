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

    int arr[] = {3, 5, 1, 2, 6, 5, 6};
    int size = sizeof(arr)/sizeof(arr[0]); // Size of array in bytes/# bytes     per element
    cout << "Unsorted array: " << endl;
    print(arr, size);

    sort->insertionSort(arr, size);

    cout << "Sorted array: " << endl;
    print(arr, size);
}
