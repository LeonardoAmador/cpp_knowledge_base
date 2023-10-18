#include <iostream>

using namespace std;

void assignValues(int arr[]) {
	cout << "Enter 5 random elements: " << endl;
	for (int i = 0; i < 5; i++) {
		cin >> arr[i];
	} 
}

bool isSorted(int arr[]) {
	for (int i = 0; i < 5; i++) {
		if (arr[i] > arr[i + 1]) {
			return false;
		}
	}
	
	return true;
}

void selectionSort(int arr[]) {	
	for (int i = 0; i < 5 - 1; i++) {
		int min = i;
		
		for (int j = i + 1; j < 5; j++) {
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

void insertionSort(int arr[]) {
	int key;
	int j;
	
	for (int i = 1; i < 5; i++) {
		key = arr[i];
		j = i - 1;
		
		while (j  >= 0 && arr[j] > key) {
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		
		arr[j + 1] = key;
	}	
}

void bubbleSort(int arr[]) {
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5 - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

int binarySearch(int arr[], int left, int right, int x) {
	
	if (!isSorted(arr)) {
		insertionSort(arr);
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

void printArray(int arr[]) {
	cout << "After Sorting: " << endl;
	for (int i = 0; i < 5; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main() {
	int option;
	int arr[5];
	int x;
	int output;
	
	do {
		cout << "Choose an option to perform or 0 to exit." << endl;
		cout << "1.Selection Sort." << endl;
		cout << "2.Insertion Sort." << endl;
		cout << "3.Binary Search." << endl;
		cout << "4.Bubble Sort" << endl;
		cout << "5.Clean Screen." << endl;
		cin >> option;
		
		system("cls");

		switch(option) {
			case 0:
				cout << "Exiting...";
				break;
			case 1:
				assignValues(arr);
				selectionSort(arr);
				printArray(arr);
				break;
			case 2:
				assignValues(arr);
				insertionSort(arr);
				printArray(arr);
				break;
			case 3:
				assignValues(arr);
		
				cout << "Element to find its location: " << endl;
				cin >> x;
				output = binarySearch(arr, 0, 4, x);
				
				if (output == -1) {
					cout << "Element not found!" << endl;
				} else {
					cout << "Element found at location " << output << endl;
				}
				break;
			case 4:
				assignValues(arr);
				bubbleSort(arr);	
				printArray(arr);
				break;
			case 5:
				system("cls");
				break;
			default:
				cout << "Choose a valid option!";
				break;
		}
		
	} while (option != 0);
}
