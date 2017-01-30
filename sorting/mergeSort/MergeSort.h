#ifndef MERGESORT_H
#define MERGESORT_H
#include <iostream>

class MergeSort {
    public:
        void mergeSort(int arr[], int l, int r);
    private:
        void merge(int arr[], int l, int m, int r);
};

#endif
