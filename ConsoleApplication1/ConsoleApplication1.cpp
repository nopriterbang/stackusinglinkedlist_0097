#include <iostream>
using namespace std;

// Node class representing a single node in the linked list
class Node {
public:
	int data;

	Node* next;

	Node() {
		next = NULL;
	}
};

// Stack class
class Stack {
private:
	Node* top; // Pointer to the top node of the stack

public:
	Stack() {
		top = NULL; // initialize the stack with a null top pointer
	}

	// Push operation: insert an element onto the top of stack
	int push(int value) {
		Node* newNode = new Node(); // 1.Allocate memory for the new node
		newNode->data = value; // 2. assign value
		newNode->next = top; // 3. Set the next pointer of the new node to the current top node
		top = newNode; // 4. update the top pointer to the new node
		cout << "Push value: " << value << endl;
		return value;
	}

	// Pop operations: remove the topmost element from the stack
	void pop() {
		if (isEmpty()) {
			cout << "Stack is empty." << endl;
		}
		cout << "Popped value: " << top->data << endl;
		top = top->next; // Update the top pointer to the next node
	}

	void peek() {
		if (top == NULL) {
			cout << "List is empty. " << endl;
		}
		else {
			Node* current = top;
			while (current != NULL) {
				cout << current->data << "" << endl;
				current = current->next;
			}
			cout << endl;
		}
	}

};
