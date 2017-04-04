#include <vector>
#include <iostream>
using namespace std;
// Linearly Search target in arr[].
//   if target is int arr[], return the index
//   otherwise return -1
int LinearSearch(vector<int> arr, int target)
{	
	for(int i=0; i<arr.size(); i++)
	{	
		if(arr[i] == target)
			return i;
	}
	return -1;
}
// Binary Search (Iterative)
int BinarySearch(vector<int> arr, int target) {
	int low, high, mid;

	low = 0;
	high = arr.size()-1;

	while (low <= high) {
		mid = (low+high)/2;
		if(arr[mid] == target) {
			return mid;
		}
		// Target bigger than middle
		//	return right array
		else if (arr[mid] < target) {
			low = mid + 1;
		}
		// Target smaller than middle
		//	return left array
		else if (arr[mid] > target) { 
			high = mid - 1;
		}
	}

	return mid;	
}
/*
//Main program
int main()
{	
int arr[] = {0, 1, 3, 4};
int x = 1;
int n = sizeof(arr)/sizeof(arr[0]);

cout << "Find "<< x << " at index " << LinearSearch(arr,n,x) << endl;

return 0;
}*/
