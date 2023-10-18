#include <iostream>

using namespace std;

void insertionSort(int arr[]) {
	int key;
	int j = 0;
	
	for (int i = 1; i < 5; i++) {
		key = arr[i];
		j = i - 1;
		
		while (j >= 0 && arr[j] > key) {
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		
		arr[j + 1] = key;
	}
}

int main() {
	
	int arr[5];
	
	cout << "Enter 5 integers in any order" << endl;
	for (int i = 0; i < 5; i++) {
		cin >> arr[i];
	}
	
	cout << "UNSORTED ARRAY: " << endl;
	for (int i = 0; i < 5; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	
	insertionSort(arr);
	
	cout << "SORTED ARRAY: " << endl;
	for (int i = 0; i < 5; i++) {
		cout << arr[i] << " ";
	}
	
	return 0;
}
