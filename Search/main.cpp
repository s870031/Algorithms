#include <iostream>
#include <vector>
#include "search.h"
using namespace std;

int main() {

	vector<int> arr;
	int target = 8;

	arr.push_back(0);
	arr.push_back(1);
	arr.push_back(3);
	arr.push_back(9);

	int result = BinarySearch(arr, target);

	// Output result
	if(result >= 0) {
		cout << "Find " << target << " at index " << result << endl;
	}
	else {
		cout << target << " is not found in array. " << endl;
	}


	return 0;
}
