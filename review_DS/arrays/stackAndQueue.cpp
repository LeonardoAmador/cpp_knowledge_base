#include <iostream>

using namespace std;


class Stack {
	private:
		int arr[5];
		int top;
		
	public:
		Stack() {
			top = -1;
			
			for (int i = 0; i < 5; i++) {
				arr[i] = 0;
			}
		}
		
		bool isEmpty() {
			if (top == -1)
				return true;
			else 
				return false;
		}
		
		bool isFull() {
			if (top == 4)
				return true;
			else
				return false;
		}
		
		void push(int value) {
			if (isFull()) {
				cout << "Stack is full!" << endl;
				return;
			} else {
				top++;
				arr[top] = value;
			}
		}
		
		int pop() {
			int removedValue;
			
			if (isEmpty()) {
				cout << "Stack is empty!" << endl;
				return 0;
			} else {
				removedValue = arr[top];
				arr[top] = 0;
				top--;
				
				return removedValue;
			}
		}
		
		int count() {
			return (top + 1);
		}
		
		int peek(int position) {
			if (position > 4) {
				cout << "Position " << position << "doesnt exist!" << endl;
				return 0;
			} else if (isEmpty()) {
				cout << "Stack is empty!" << endl;
				return 0; 
			} else {
				return arr[position];
			}
		}
		
		void change(int position, int value) {			
			if (isEmpty()) {
				cout << "Stack is empty!" << endl;
				return; 
			} else {
				arr[position] = value;
				
				cout << "Value changed at location " << position << endl;
			}
		}
		
		void display() {
			cout << "All values in the Stack are " << endl;
			for (int i = 4; i >= 0; i--) {
				cout << arr[i] << endl;
			}
		}
};


class Queue {
	private:
		int arr[5];
		int front;
		int rear;
	
	public:
		Queue() {
			front = -1;
			rear = -1;
			
			for (int i = 0; i < 5; i++) {
				arr[i] = 0;
			}
		}
		
		bool isEmpty() {
			if (front == -1 && rear == -1)
				return true;
			else
				return false;
		}
		
		bool isFull() {
			if (rear == 4)
				return true;
			else 
				return false;
		}
		
		void enqueue(int value) {
			if (isFull()) {
				cout << "Queue is full!" << endl;
				return;
			} else if (isEmpty()) {
				front = 0;
				rear = 0;
				arr[rear] = value;
			} else {
				rear++;
				arr[rear] = value;
			}
		}
		
		int dequeue() {
			int removedValue;
			
			if (isEmpty()) {
				cout << "Queue is empty!" << endl;
				return 0;
			} else if (front == rear) {
				removedValue = arr[front];
				arr[front] = 0;
				front = -1;
				rear = -1;
				
				return removedValue;
			} else {
				removedValue = arr[front];
				arr[front] = 0;
				front++;
				
				return removedValue;
			}
		}
		
		int count() {
			return (rear - front + 1);
		}
		
		void display() {
			cout << "All values in the Queue are " << endl;
			for (int i = 0; i < 5; i++) {
				cout << arr[i] << " ";
			}
			cout << endl;
		}
};

int main() {
    Stack stack;
    Queue queue;
    int choice, value, position;

    do {
        system("cls");

        cout << "Welcome to Stack and Queue Program" << endl;
        cout << "1. Push to Stack" << endl;
        cout << "2. Pop from Stack" << endl;
        cout << "3. Enqueue to Queue" << endl;
        cout << "4. Dequeue from Queue" << endl;
        cout << "5. Count Stack" << endl;
        cout << "6. Count Queue" << endl;
        cout << "7. Change Stack" << endl;
        cout << "8. Display Stack" << endl;
        cout << "9. Display Queue" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to push: ";
                cin >> value;
                stack.push(value);
                break;
            case 2:
                cout << "Popped value: " << stack.pop() << endl;
                break;
            case 3:
                cout << "Enter value to enqueue: ";
                cin >> value;
                queue.enqueue(value);
                break;
            case 4:
                cout << "Dequeued value: " << queue.dequeue() << endl;
                break;
            case 5:
                cout << "Number of elements in the Stack: " << stack.count() << endl;
                break;
            case 6:
                cout << "Number of elements in the Queue: " << queue.count() << endl;
                break;
            case 7:
                cout << "Enter position and value to change in the Stack: ";
                cin >> position >> value;
                stack.change(position, value);
                break;
            case 8:
                stack.display();
                break;
            case 9:
                queue.display();
                break;
            case 0:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
        cout << "----------------------------------------" << endl;
        system("pause");

    } while (choice != 0);

    return 0;
}
