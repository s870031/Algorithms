// Tim Chen

#include <iostream>
#include "sort.h"
#include <math.h>
#include <vector>

using namespace std;
int main()
{
	vector<int> array;
	vector<int> sarray;
	array.push_back(8);
	array.push_back(7);
	array.push_back(6);
	array.push_back(5);
	array.push_back(4);
	array.push_back(3);
	array.push_back(1);
	array.push_back(2);

	sarray = SelectionSort(array); // get the sorted array

	// == Output ==
	cout << "Original Array: ";
	for(int i=0; i<array.size(); i++)
		cout << array[i] << " ";
	cout << endl;
	cout << "Sorted Array  : ";
	for(int i=0; i<sarray.size(); i++)
		cout << sarray[i] << " ";

	cout << endl;
		
	return 0;
}
