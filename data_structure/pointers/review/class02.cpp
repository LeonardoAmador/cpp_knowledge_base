#include <iostream>
using namespace std;

void populateArr(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    cout << "Enter the " << i + 1<< "o Element: " << endl;
    cin >> arr[i];
  }
}

void printArr(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		cout << *(arr + i) << " ";
	}
}

int main() {
	
	int luckyNumbers[5];
	
	populateArr(luckyNumbers, 5);
	printArr(luckyNumbers, 5);
	
	return 0;
}
