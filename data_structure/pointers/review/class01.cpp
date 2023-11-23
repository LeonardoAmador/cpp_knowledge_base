#include <iostream>

using namespace std;

void print(void* ptr, char type) {
	switch (type) {
		case 'i':
			cout << *((int*)ptr) << endl;
			break;
		case 'c':
			cout << *((char*)ptr) << endl;
			break;
		case 'f':
			cout << *((float*)ptr) << endl;
			break;	
	}
		
}

int main() {
	int number = 5;
	char letter = 'x';
	float number2 = 5.2355;
	
	print(&number, 'i');
	print(&letter, 'c');
	print(&number2, 'f');
	
	return 0;
} 
