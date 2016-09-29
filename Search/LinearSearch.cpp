#include <iostream>
using namespace std;

// Linearly Search x in arr[].
//   if x is int arr[], return the index
//   otherwise return -1
int LinearSearch(int arr[], int n, int x)
{	
		for(int i=0; i<n; i++)
		{	
			if(arr[i] == x)
				return i;
		}
		return -1;
}
//Main program
int main()
{	
	int arr[] = {0, 1, 3, 4};
	int x = 2;
	int n = sizeof(arr)/sizeof(arr[0]);

	cout << "Find "<< x << " at index " << LinearSearch(arr,n,x) << endl;

  return 0;
}
