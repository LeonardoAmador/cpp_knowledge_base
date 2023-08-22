#include <iostream>

using namespace std;

void selectionSort (int arr[], int size) {
	
	for (int i = 0; i < size - 1; i++) {
		
		int minIndex = i;
		
		for (int j = i + 1; j < size; j++) {
			if (arr[j] < arr[minIndex]) {
				minIndex = j;
			}
		}
		
		if (minIndex != i) {
			swap(arr[minIndex], arr[i]);
		}
	}
}

void printArray (int arr[], int size) {
	
	cout << "Sorted array: ";
	
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	
}

int main() {
	
	setlocale(LC_ALL, "Turkish");
	
	int array[] = { -1, 5, 47, 2, 4, 13 };
	int size = sizeof(array) / sizeof(array[0]);
	
	selectionSort(array, size);
	printArray(array, size);
	
	return 0;
}
