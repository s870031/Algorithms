// 
// This file contains programs for generating sorted array
// by different types of sorting algorithm
//
#include <math.h>

/*******************************************/
/* return a sorted array by insertion sort */
/*******************************************/
int* InsertionSort(int array[],int arraySize)           
{
    for(int i=1; i<arraySize; i++)
    {
        int key = array[i];
	int j = i - 1;
	while(array[j]>key && j>=0)    // if the element is bigger than key
	{
	    array[j+1] = array[j];     //    move to right
	    j--;
	}
	array[j+1] = key;              // insert the key
    }
      
    return array;
}
