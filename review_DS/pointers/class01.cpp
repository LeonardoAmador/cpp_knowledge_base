#include <iostream>

using namespace std;

int main() {
	int n = 5;
	int* ptr = &n;
	
	cout << &n << endl;
	cout << ptr << endl;
	cout << *ptr << endl;
	
	*ptr = 10;
	cout << *ptr << endl;
	cout << n << endl;
	
	int v;
	int* ptr2 = &v;
	*ptr2 = 9;
	
	cout << *ptr2 << endl;
	cout << v << endl;
	return 0;
}
