#include <iostream>
#include "Stack.h"

using namespace std;

int main() {
    int n, a;
    
    cout << "Enter the decimal number: ";
    cin >> n;

    Stack binaryStack;

    while (n > 0) {
        a = n % 2;
        n = n / 2;
        binaryStack.push(a);
    }

    cout << "Resultant binary: ";

    while (!binaryStack.isEmpty()) {
        cout << binaryStack.pop() << "\t";
    }

    cout << endl;

    return 0;
}

