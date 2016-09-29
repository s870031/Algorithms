// Tim Chen

#include <iostream>
#include "sort.h"
#include <math.h>
using namespace std;

int main()
{
	int array[8] = {8,7,6,5,4,3,1,2};
	int arraySize = sizeof(array)/sizeof(*array);

	MergeSort(array,arraySize); // get the sorted array

	// == Output ==
	cout << "Sorted Array: ";
	for(int i=0; i<arraySize; i++)
		cout << array[i] << " ";

	cout << endl;
		
	return 0;
}
