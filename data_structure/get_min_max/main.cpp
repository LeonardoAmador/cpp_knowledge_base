#include <iostream>

using namespace std;

int main() {
	
	setlocale(LC_ALL, "Turkish");
	
	int length = 10;
	int array[length];
	int lowest;
	int highest;
	
	for (int i = 0; i < length; i++) {
		cout << "Enter the " << i + 1 << "º value: ";
		cin >> array[i];
	}
	
	for (int i = 0; i < length; i++) {
		
		lowest = array[0];
		highest = array[0];
		
		for (i = 1; i < length; i++) {
			lowest = (array[i] < lowest) ? array[i] : lowest;
			highest = (array[i] > highest) ? array[i] : highest;
		}
		
		cout << "\nThis is the lowest value: " << lowest << endl;
		cout << "This is the highest value: " << highest << endl ;
	}
	
	return 0;
}
