// 
// This file contains programs for generating sorted array
// by different types of sorting algorithm
//
#include <math.h>
#include <climits>
#include <iostream>
#include <vector>
/*******************************************/
/* Insertion sort: return a sorted array   */
/*******************************************/
using namespace std;
vector<int> InsertionSort(vector<int> array)
{
	// Go through and insert every element in array
	for (int i=1; i<array.size(); i++) {
		int j=i;

		// Insert the element to the right place
		while(array[j] < array[j-1] && j>0) {
			swap(array[j],array[j-1]);
			j--;
		}
	}
	return array;
}

/*******************************************/
/* Merge sort: return a sorted array       */
/*******************************************/
vector<int> MergeSort(vector<int> array) {
	vector<int> sarray;

	if(array.size() <= 1) {
		return array;
	}

	// Divide
	int mid = array.size() / 2;
	vector<int> left,right;
	for (int i=0; i<mid; i++) {
		left.push_back(array[i]);
	}
	for (int i=mid; i<array.size(); i++) {
		right.push_back(array[i]);
	}
	left = MergeSort(left);
	right = MergeSort(right);

	// Conquer (Merge)
	left.push_back(INT_MAX);
	right.push_back(INT_MAX);	
	int lp=0, rp=0;
	while (sarray.size() < array.size()) {
		if(left[lp] < right[rp]) {
			sarray.push_back(left[lp]);
			lp++;
		}
		else {
			sarray.push_back(right[rp]);
			rp++;
		}
	}

	return sarray;
}

/*******************************************/
/* Quick sort: return a sorted array       */
/*******************************************/
vector<int> QuickSort(vector<int> array) {
	vector<int> sarray;
	if (array.size() <= 1) {
		return array;
	}
	else {
		int pivot = array[0];
		int i = 0; // pos of pivot
		int j = array.size() - 1;

		// move pivot to the right place
		while(i != j) {
			if (array[j] < pivot && i<j) {
				swap(array[j],array[i]);
				swap(i,j);
				pivot = array[i];
			}
			else if (array[j] > pivot && i>j) {
				swap(array[j],array[i]);
				swap(i,j);
				pivot = array[i];
			}
			j = (i<j)? j-1:j+1;
		}
		pivot = array[i];

		// quick sort left and right
		vector<int> left;
		vector<int> right;
		for(int id=0; id<i; id++){
			left.push_back(array[id]);
		}
		for(int id=i+1; id<array.size(); id++) {
			right.push_back(array[id]);
		}

		left = QuickSort(left);
		right = QuickSort(right);	

		// concatenate left, pivot, right
		for(int id=0; id<left.size(); id++) {
			sarray.push_back(left[id]);
		}
		sarray.push_back(pivot);
		for(int id=0; id<right.size(); id++) {
			sarray.push_back(right[id]);
		}
		return sarray;
	}
}
