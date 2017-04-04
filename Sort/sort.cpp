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
int* InsertionSort(int array[],int arraySize)
{
	for(int i=1; i<arraySize; i++)
	{
		int key = array[i];
		int j = i - 1;
		while(array[j]>key && j>=0)    // if the element is bigger than key
		{
			array[j+1] = array[j];       //   move element to the right
			j--;                         //   index minus one
		}
		array[j+1] = key;              // insert the key to the position found
	}

	return array;
}

/*******************************************/
/* Merge sort: return a sorted array       */
/*******************************************/
int* MergeSort(int array[], int arraySize)
{
	int *leftArray, *rightArray;
	int leftSize, rightSize;
	leftSize = floor(arraySize/2);         leftArray  = new int [leftSize+1];
	rightSize = ceil((double)arraySize/2); rightArray = new int [rightSize+1];

	if(arraySize == 1)                                 // Final Condition of Recursive funciton: 
		return array;                                  // 	if is the only element return itself

	for(int index=0; index<arraySize; index++)         // Divide array into two subarray
	{
		if(index < leftSize)                           //   from index 0 to floor(array size)-1
			leftArray[index] = array[index];           //   	set the left array
		else                                           // 	from index floor(array size)
			rightArray[index-leftSize] = array[index]; //    	set the right array
	}

	MergeSort(leftArray,leftSize);                   // Solve the left
	MergeSort(rightArray,rightSize);                 // Solve the right	

	leftArray[leftSize] = INT_MAX;                   // Merge left and right array
	rightArray[rightSize] = INT_MAX;
	int leftIndex=0, rightIndex=0;
	for(int index=0; index<arraySize; index++)
	{
		array[index] = (leftArray[leftIndex] <= rightArray[rightIndex])? 
			leftArray[leftIndex++] : rightArray[rightIndex++];
	}

	return array;
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
