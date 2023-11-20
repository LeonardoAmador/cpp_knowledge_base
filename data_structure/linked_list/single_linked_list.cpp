#include <iostream>

using namespace std;

class Node {
	public: 
		int key;
		int data;
		Node* next;
		
		Node() {
			key = 0;
			data = 0;
			next = NULL;
		}
		
		Node(int k, int d) {
			key = k;
			data = d;
		}
};

class SinglyLinkedList {
	public:
		Node* head;
		
		SinglyLinkedList() {
			head = NULL;
		}
		
		SinglyLinkedList(Node *n) {
			head = n;
		}
		
		// Check if node exists using key value
		Node* nodeExists(int k) {
			Node* temp = NULL;
			Node* ptr = head;
			
			while (ptr != NULL) {
				if (ptr->key == key) {
					temp = ptr;
				}
				
				ptr = ptr->next;
			}
			
			return temp;
		}
		
		//Apend a node to the list
		void appendNode(Node *n) {
			if (nodeExists(n->key) != NULL) {
				cout << "Node already exists with key value: " << n->key << ". Append another node with different key value" << endl;
			} else {
				if (head == NULL) {
					head = n;
					cout << "Node Appended" << endl;
				} else {
					Node* ptr = head;
					
					while (ptr->next != NULL) {
						ptr = ptr->next;
					}
					
					ptr->next = n;
					
					cout << "Node Appended" << endl;
				}
			}
		}
		
		//Prepend node - Attach a node at the start
		void prependNode(Node *n) {
			if (nodeExists(n->key) != NULL) {
				cout << "Node already exists with key value: " << n->key << ". Append another node with different key value" << endl;
			} else {
				n->next = head;
				head = n;
				
				cout << "Node Prepended" << endl;
			}
		}
		
		//Insert a node after a particular node in the list
		void insertNodeAfter(int k, Node *n) {
			Node* ptr = nodeExists(k);
			
			if (ptr == NULL) {
				cout << "No more exists with key value: "<< k << endl;
			} else { 
				if (nodeExists(n->key) != NULL) {
					cout << "Node already exists with key value: " << n->key << ". Append another node with different key value" << endl;
				} else {
					n->next = ptr->next;
					ptr->next = n;
					cout << "Node inserted" << endl;
				}
					
			}
		}
		
		//Delete node by unique key
		void deleteNodeByKey(int k) {
			if (head == NULL) {
				cout << "Singly Linked List already Empty. Cant delete" << endl;
			} else if(head !== NULL) {	
				if (head->key == k) {
					head = head->next;
					cout << "Node UNLINKED with key value: " << k << endl;
				} else {
					Node* temp = NULL;
					Node* prevPtr = head;
					Node* currentPtr = head->next;
					
					while (currentPtr != NULL) {
						if (currentPtr->key == k) {
							temp = currentPtr;
							currentPtr = NULL;
						} else {
							prevPtr = prevPtr->next;
							currentPtr = currentPtr->next;
						}
					}
					
					if (temp!=NULL) {
						prevPtr->next = temp->next;
						cout << "Node UNLINKED with keys value: " << k << endl;
					} else {
						cout << "Node Doesn't exist with key value: " << k << endl;
					}
				}
			}
		}
		
		void updateNodeByKey(int k, int d) {
			Node *ptr = nodeExists(k);
			
			if (ptr != NULL) {
				ptr->data = d;
				cout << "Node Data Updated Successfully" << endl;
			} else {
				cout << "Node Doesn't exist with key value: " << k << endl;
			}
			
		}
};

int main() {
	
	
	return 0;
}
