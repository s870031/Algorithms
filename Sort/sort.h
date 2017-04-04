#ifndef SO_H
#define SO_H

#include <vector>
using namespace std;

/* return a sorted array by insertion sort */
extern vector<int> InsertionSort(vector<int> array);
/* return a sorted array by selection sort */
extern vector<int> SelectionSort(vector<int> array);
/* return a sorted array by merge sort */
extern vector<int> MergeSort(vector<int> array);
/* return a sorted array by quick sort */
extern vector<int> QuickSort(vector<int> array);

#endif
