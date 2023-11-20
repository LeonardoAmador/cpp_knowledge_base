#include <iostream>

using namespace std;

class Stack {
private:
    int maxSize;
    int top;
    int *items;

public:
    Stack(int size) {
        maxSize = size;
        top = -1;
        items = new int[maxSize];
        
        for (int i = 0; i < maxSize; i++) {
        	items[i] = 0;
		}
    }

    void push(int element) {
        if (top == maxSize - 1) {
            cout << "Stack is full, cannot push more elements." << endl;
        } else {
            top++;
            items[top] = element;
        }
    }

    int pop() {
        if (top == -1) {
            cout << "Stack is empty, cannot pop more elements." << endl;
            return -1;
        } else {
            int removedElement = items[top];
            top--;
            return removedElement;
        }
    }

    void pop2() {
        if (top < 1) {
            cout << "The stack contains less than two elements. Cannot pop two elements." << endl;
        } else {
            top -= 2;
        }
    }

    void push2(int element1, int element2) {
        if (top == maxSize - 2) {
            cout << "The stack has space for only one element. Cannot push two elements." << endl;
        } else {
            top++;
            items[top] = element1;
            top++;
            items[top] = element2;
        }
    }
    
    void displayStack() {
        cout << "Current Stack: ";
        if (top == -1) {
            cout << "Empty" << endl;
        } else {
            for (int i = maxSize; i >= 0; i--) {
                cout << items[i] << " " << endl;
            }
            cout << endl;
        }
    }
    
    void displayMenu() {
        cout << "User Menu:" << endl;
        cout << "1. Push an element onto the stack" << endl;
        cout << "2. Pop an element from the stack" << endl;
        cout << "3. Pop two elements from the stack" << endl;
        cout << "4. Push two elements onto the stack" << endl;
        cout << "5. Display Stack" << endl;
        cout << "6. Exit" << endl;
    }
    
    void userMenu() {
        displayMenu();
        int choice;
        int element, element1, element2;
        while (true) {
            cout << "Enter your choice: ";
            cin >> choice;
            switch (choice) {
                case 1:
                    cout << "Enter the element to push: ";
                    cin >> element;
                    push(element);
                    break;
                case 2:
                    pop();
                    break;
                case 3:
                    pop2();
                    break;
                case 4:
                    cout << "Enter the first element to push: ";
                    cin >> element1;
                    cout << "Enter the second element to push: ";
                    cin >> element2;
                    push2(element1, element2);
                    break;
                case 5:
                    displayStack();
                    break;
                case 6:
                    cout << "Exiting..." << endl;
                    return;
                default:
                    cout << "Invalid choice! Please try again." << endl;
            }
        }
    }

    ~Stack() {
        delete[] items;
    }
};

int main() {
   	Stack myStack(5);
	myStack.userMenu();

    return 0;
}

