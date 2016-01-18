#include <iostream>
#include <array>
using namespace std;
int* InsertionSort(int array[], int arraySize)
{
    for(int i=1; i<arraySize; i++)
    {
        int key = array[i];
	int j = i - 1;
	while(array[j]>key && j>=0)   // if the element is bigger than key
	{
	    array[j+1] = array[j];    //    move to right
	    j--;
	}
        array[j+1] = key;             // insert the key
    }
    return array;
}	

int main()
{
    int array[5] = {3, 2, 1, 0, 5};
    int arraySize = sizeof(array)/sizeof(*array);
    int *sarray = InsertionSort(array,arraySize);

    for(int i=0; i<sizeof(array)/sizeof(*array); i++)
        cout << sarray[i] << " ";
	
    cout << endl;

    return 0;
}
