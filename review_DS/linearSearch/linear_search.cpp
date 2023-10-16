#include <iostream>

using namespace std;

void linearSearch(int arr[], int num) {
	int temp = -1;
	
	for (int i = 0; i < 5; i++) {
		if (arr[i] == num) {
			cout << "Element found at location: " << i << endl;
			temp = 0;
			break;
		}
	}
	
	if (temp == -1) {
		cout << "No Element Found" << endl;
	}	
}

int main() {
	int arr[5];
	int num;
	
	cout << "Please enter 5 elements of the array" << endl;
	for (int i = 0; i < 5; i++) {
		cout << "Element " << i + 1 << "o: ";
		cin >> arr[i];
	}
	
	cout << "Please enter an element to search: " << endl;
	cin >> num;
	
	linearSearch(arr, num);
	
	return 0;
}
