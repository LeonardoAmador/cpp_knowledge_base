#include <iostream>

using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) : data(value), next(NULL) {}
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() : head(NULL) {}

    ~LinkedList() {
        while (head != NULL) {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }

    void insertAtEnd(int value) {
        Node* newNode = new Node(value);

        if (head == NULL) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    void insertAtBeginning(int value) {
        Node* newNode = new Node(value);
        newNode->next = head;
        head = newNode;
    }

    void removeFromEnd() {
        if (head == NULL) {
            cout << "The list is empty. Cannot remove from the end.\n";
            return;
        }

        if (head->next == NULL) {
            delete head;
            head = NULL;
            return;
        }

        Node* temp = head;
        while (temp->next->next != NULL) {
            temp = temp->next;
        }

        delete temp->next;
        temp->next = NULL;
    }

    void removeFromBeginning() {
        if (head == NULL) {
            cout << "The list is empty. Cannot remove from the beginning.\n";
            return;
        }

        Node* temp = head;
        head = head->next;
        delete temp;
    }

    void display() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << "\n";
    }
};

int getUserInput() {
    int choice;
    cout << "Choose an option: ";
    cin >> choice;
    return choice;
}

int main() {
    LinkedList list;

    int choice, value;

    do {
        cout << "\nMenu:\n";
        cout << "1. Insert at the end\n";
        cout << "2. Insert at the beginning\n";
        cout << "3. Remove from the end\n";
        cout << "4. Remove from the beginning\n";
        cout << "5. Display list\n";
        cout << "0. Exit\n";

        choice = getUserInput();

        switch (choice) {
            case 1:
                cout << "Enter the value to insert: ";
                cin >> value;
                list.insertAtEnd(value);
                break;
            case 2:
                cout << "Enter the value to insert at the beginning: ";
                cin >> value;
                list.insertAtBeginning(value);
                break;
            case 3:
                list.removeFromEnd();
                break;
            case 4:
                list.removeFromBeginning();
                break;
            case 5:
                cout << "List: ";
                list.display();
                break;
            case 0:
                cout << "Exiting the program.\n";
                break;
            default:
                cout << "Invalid option. Please try again.\n";
        }
    } while (choice != 0);

    return 0;
}
