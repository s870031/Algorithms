#include <iostream>
#include "sort.h"
using namespace std;

int main()
{
    int array[6] = {3, 2, 1, 0, 6, 7};
    int arraySize = sizeof(array)/sizeof(*array);
    int *sarray = InsertionSort(array,arraySize);

    // == Output ==
    cout << "Sorted Array: ";
    for(int i=0; i<arraySize; i++)
        cout << sarray[i] << " ";
	
    cout << endl;

    return 0;
}
