#include <iostream>

using namespace std;

const int MAX_SIZE = 10;

struct Queue {
    int elements[MAX_SIZE];
    int frontIndex;
    int rearIndex;

    Queue() {
        frontIndex = -1;
        rearIndex = -1;
    }

    bool isFull() {
        return (rearIndex + 1) % MAX_SIZE == frontIndex;
    }

    bool isEmpty() {
        return frontIndex == -1;
    }

    void enqueue(int value) {
        if (isFull()) {
            cout << "The queue is full. Unable to insert more elements." << endl;
        } else {
            if (isEmpty()) {
                frontIndex = 0;
            }
            rearIndex = (rearIndex + 1) % MAX_SIZE;
            elements[rearIndex] = value;
            cout << "Element " << value << " inserted successfully." << endl;
        }
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "The queue is empty. Unable to remove elements." << endl;
        } else {
            int removedElement = elements[frontIndex];
            if (frontIndex == rearIndex) {
                frontIndex = -1;
                rearIndex = -1;
            } else {
                frontIndex = (frontIndex + 1) % MAX_SIZE;
            }
            cout << "Element " << removedElement << " removed successfully." << endl;
        }
    }

    int front() {
        if (isEmpty()) {
            cout << "The queue is empty. There is no element at the front." << endl;
            return -1;
        } else {
            return elements[frontIndex];
        }
    }

    void display() {
        if (isEmpty()) {
            cout << "The queue is empty." << endl;
        } else {
            cout << "Queue: ";
            int currentIndex = frontIndex;
            while (true) {
                cout << elements[currentIndex] << " ";
                if (currentIndex == rearIndex) {
                    break;
                }
                currentIndex = (currentIndex + 1) % MAX_SIZE;
            }
            cout << endl;
        }
    }

    void enqueueAll(int arr[], int size) {
        for (int i = 0; i < size; i++) {
            enqueue(arr[i]);
        }
    }

    void dequeueAll() {
        while (!isEmpty()) {
            dequeue();
        }
    }
};

int main() {
    Queue queue;

    while (true) {
        cout << "\nMenu:\n";
        cout << "1. Insert an element\n";
        cout << "2. Remove an element\n";
        cout << "3. Show the front element\n";
        cout << "4. Insert all elements at once\n";
        cout << "5. Remove all elements at once\n";
        cout << "6. Exit\n";
        cout << "Choose an option: ";

        int choice;
        cin >> choice;

        switch (choice) {
            case 1: {
                int element;
                cout << "Enter the element to be inserted: ";
                cin >> element;
                queue.enqueue(element);
                break;
            }
            case 2:
                queue.dequeue();
                break;
            case 3: {
                int frontElement = queue.front();
                if (frontElement != -1) {
                    cout << "Front element: " << frontElement << endl;
                }
                break;
            }
            case 4: {
                int n;
                cout << "Enter the number of elements to insert: ";
                cin >> n;
                int elementsToAdd[n];
                cout << "Enter " << n << " elements separated by space: ";
                for (int i = 0; i < n; i++) {
                    cin >> elementsToAdd[i];
                }
                queue.enqueueAll(elementsToAdd, n);
                cout << "Elements inserted successfully." << endl;
                break;
            }
            case 5:
                queue.dequeueAll();
                cout << "All elements removed." << endl;
                break;
            case 6:
                return 0;
            default:
                cout << "Invalid option. Please try again." << endl;
        }

        queue.display();
    }

    return 0;
}
