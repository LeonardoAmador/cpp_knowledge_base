#include <iostream>
using namespace std;


void getMinMax(int arr[], int size, int *min, int *max) {
	for (int i = 1; i < size; i++) {
		if (arr[i] < *min) {
			*min = arr[i];
		}
		
		if (arr[i] > *max) {
			*max = arr[i];
		}
	}
}

int main() {
	int numbers[5] = { 1, 2, -3, 4, 5};
	int min = numbers[0];
	int max = numbers[0];
	
	getMinMax(numbers, 5, &min, &max);
	
	cout << "Min is " << min << endl;
	cout << "Max is " << max << endl;
	
	return 0;
}
