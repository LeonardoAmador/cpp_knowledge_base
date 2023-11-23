#include <iostream>
using namespace std;

int main() {
    int size;
    
    cout << "Enter the size: ";
    cin >> size;

    if (size <= 0) {
        cout << "Invalid size. Please enter a positive value." << endl;
        return 1;
    }

    int* arr = new (nothrow) int[size];

    if (!arr) {
        cout << "Allocation failed" << endl;
    } else {
        for (int i = 0; i < size; ++i) {
            cout << "Enter element " << i + 1 << ": ";
            cin >> arr[i];
        }

        cout << "Entered elements: ";
        for (int i = 0; i < size; ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;

        delete[] arr;
    }

    return 0;
}

