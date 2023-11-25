#include <iostream>
#include <limits>

using namespace std;

int sum(int numbers[], int size) {
    int sum = 0;
    
    for (int i = 0; i < size; i++) {
        sum += numbers[i];
    }
    
    return sum;
}

bool validateArraySize(int size) {
    return (size <= 0) ? true : false;
}

int main() {
    int size;
    
    cout << "Enter the size of the array: ";
    cin >> size;
    
    if (validateArraySize(size)) {
        cout << "Error: The size must be greater than 0." << endl;
        return -1;
    }
    
    int* numbers = new (nothrow) int[size];
    
    if (numbers == NULL) {
        cout << "Error: Unable to allocate memory." << endl;
    } else {
        cout << "Enter " << size << " Integer Elements: " << endl;
        for (int i = 0; i < size; i++) {
            cout << "Array[" << i << "]: ";
            
            while (!(cin >> numbers[i])) {
                cout << "Invalid input. Please enter an integer: ";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
        }
    }
    
    cout << "Sum of the numbers: " << sum(numbers, size) << endl;
    
    delete[] numbers;
    
    return 0;
}

