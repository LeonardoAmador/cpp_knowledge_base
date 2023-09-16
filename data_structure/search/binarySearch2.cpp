#include <iostream>

using namespace std;

void populateArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << "Enter the " << i + 1 << "th value: ";
        cin >> arr[i];
    }
}

void sortArray(int arr[], int size) {
    for (int step = 1; step < size; step++) {
        int key = arr[step];
        int j = step - 1;

        while (key < arr[j] && j >= 0) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
    
    cout << endl;
    cout << "Sorted array: ";
    
    for (int i = 0; i < size; i++) { 
		cout << arr[i] << " ";
	}
	
	cout << endl;
}

void validateArray(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        if (arr[i] < arr[i - 1]) {
            sortArray(arr, size);
            return;
        }
    }
}

int binarySearch(int arr[], int target, int size) {
    int left = 0;
    int right = size - 1;
    int elementsEliminated = 0;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            cout << "Elements eliminated: " << elementsEliminated << endl;
            return mid;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }

        elementsEliminated++;
        cout << "Elements eliminated in this division: " << elementsEliminated << endl;
    }

    cout << "Total elements eliminated: " << elementsEliminated << endl;

    return -1;
}

void showResult(int arr[], int target, int size) {
    validateArray(arr, size);

    int indexFound = binarySearch(arr, target, size);

    if (indexFound == -1) {
    	cout << endl;
        cout << "The target " << target << " was not found" << endl;
    } else {
    	cout << endl;
        cout << "The target " << target << " was found at index: " << indexFound << endl;
	}
}

int main() {
    int size = 10;
    int arr[size];

    populateArray(arr, size);

    int target;
    
    cout << "\n";
    cout << "Enter the target value: ";
    cin >> target;

    showResult(arr, target, size);

    return 0;
}
