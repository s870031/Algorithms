#ifndef SO_H
#define SO_H

#include <vector>
using namespace std;

/* return a sorted array by insertion sort */
extern int* InsertionSort(int array[], int arraySize);
/* return a sorted array by merge sort */
extern int* MergeSort(int array[], int arraySize);
/* return a sorted array by quick sort */
extern vector<int> QuickSort(vector<int> array);

#endif
