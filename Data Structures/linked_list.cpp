#include<iostream>

using namespace std ;

class Node{
    private: 
        int data{};
        Node* next ;
    public :
        void push(Node** head_ref, int data);
        void append(Node** head_ref, int data);
        void insert(Node* prev_node ,int data);
};  

void Node :: push(Node** head_ref, int data){
    Node* newnode = new Node();
    newnode->data = data;
    newnode->next =(*head_ref);
    (*head_ref) = newnode;
}
void Node :: insert(Node* prev_node, int data){
    if (prev_node == NULL) {
        cout << "The given previous node cannot be NULL";
        return;
    }
    Node* new_node = new Node();
    new_node->data = data;
    new_node->next = prev_node->next;
    prev_node->next = new_node;
}
  