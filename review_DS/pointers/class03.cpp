#include <iostream>

using namespace std;



int main() {
	
	int luckyNumbers[5];
	
//	cout << luckyNumbers << endl;
//	cout << &luckyNumbers[0] << endl;
//	cout << luckyNumbers[2] << endl;
//	cout << *(luckyNumbers + 2) << endl;

	cout << "Enter 5 integers numbers: " << endl;
	for (int i = 0; i < 5; i++) {
		cin >> luckyNumbers[i];
	}
	
	cout << "Output of the numbers: " << endl;
	for (int i = 0; i < 5; i++) {
		cout << *(luckyNumbers + i) << " ";
	}
	
	system("pause>0");
	return 0;
}
