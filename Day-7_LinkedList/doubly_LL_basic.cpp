#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;

    Node(int val) {
        data = val;
        prev = NULL;
        next = NULL;
    }
};

// Insert at beginning
void insertAtHead(Node*& head, int val) {
    Node* newNode = new Node(val);
    if (head != NULL) {
        head->prev = newNode;
        newNode->next = head;
    }
    head = newNode;
}

// Insert at end
void insertAtTail(Node*& head, int val) {
    Node* newNode = new Node(val);

    if (!head) {
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next) {
        temp = temp->next;
    }

    temp->next = newNode;
    newNode->prev = temp;
}

// Delete a node
void deleteNode(Node*& head, int key) {
    Node* temp = head;

    while (temp && temp->data != key) {
        temp = temp->next;
    }

    if (!temp) return;

    if (temp->prev)
        temp->prev->next = temp->next;
    else
        head = temp->next;

    if (temp->next)
        temp->next->prev = temp->prev;

    delete temp;
}

// Print forward
void printForward(Node* head) {
    while (head) {
        cout << head->data << " <-> ";
        head = head->next;
    }
    cout << "NULL\n";
}

int main() {
    Node* head = NULL;

    insertAtHead(head, 2);
    insertAtHead(head, 1);
    insertAtTail(head, 3);
    insertAtTail(head, 4);

    printForward(head);

    deleteNode(head, 3);

    printForward(head);

    return 0;
}