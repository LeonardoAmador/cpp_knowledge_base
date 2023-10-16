#include <iostream>

using namespace std;

int binarySearch(int arr[], int left, int right, int x) {
	while (left <= right) {
		int mid = left + (right - left) / 2;
		
		if (arr[mid] == x) {
			return mid;
		} else if (arr[mid] < x) {
			left = mid + 1;
		} else {
			right = mid - 1;
		}
	}

	return -1;
}

int main() {
	int num;
	int arr[10];
	int output;
	
	cout << "Enter 10 integers in ASCENDING order" << endl;
	for (int i = 0; i < 10; i++) {
		cin >> arr[i];
	}
	
	cout << "Enter one number that you want to search in the array: " << endl;
	cin >> num;
	
	output = binarySearch(arr, 0, 9, num);
	
	if (output == -1) {
		cout << "No Match Found" << endl;
	}  else {
		cout << "Match Found at Index Position " << output << endl;
	}
	
	return 0;
}
