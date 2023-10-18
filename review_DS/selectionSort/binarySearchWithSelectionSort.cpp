#include <iostream>

using namespace std;

bool isOrdered(int arr[], int size) {
	for (int i = 0; i < size - 1; i++) {
		if (arr[i] > arr[i + 1]) {
			return false;
		}
	}
	
	return true;
}

void selectionSort(int arr[], int size) {
	for (int i = 0; i < size - 1; i++) {
		int min = i;
		
		for (int j = i + 1; j < size; j++) {
			if (arr[j] < arr[min]) {
				min = j;
			}
		}
		
		if (min != i) {
			int temp = arr[min];
			arr[min] = arr[i];
			arr[i] = temp;
		}
	}
}

int binarySearch(int arr[], int left, int right, int x) {
	
	if (!isOrdered(arr, 10)) {
		selectionSort(arr, 10);
	}
	
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
	
	int arr[10];
	int x;
	int output;
	
	cout << "Enter 10 integers elements: " << endl;
	for (int i = 0; i < 10; i++) {
		cin >> arr[i];
	}
	
	cout << "Element to find out location: " << endl;
	cin >> x;
	
	output = binarySearch(arr, 0, 9, x);
	
	if (output == -1) {
		cout << "Element not found!" << endl;
	} else {
		cout << "Element found at location: " << output;
	}
		
	return 0;
}
