//Traversal of singly linkedlist

#include<iostream>
using namespace std;

struct node{
    int data;
    node* next; //  pointer to the next node
};

int main() {
    node* head = nullptr;
    node* ptr = nullptr;
    
    // Create one node (simplest form)
    head = new node;   // allocate memory
    cout << "Enter data for the node: ";
    cin >> head->data;
    head->next = nullptr;

    ptr = head;
    while(ptr != nullptr) {
        cout << "The data of the ptr is " << ptr->data << endl;
        ptr = ptr->next;
    }

    return 0;
}
