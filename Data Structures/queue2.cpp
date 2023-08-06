#include<iostream>

using namespace std;

class Node{
    int data;
    Node* next;    
    public:
        Node* new_node(int data){
            Node* node = new Node;
            node-> data = data;
            node -> next = NULL;
            return node;
        }
        void push(Node** head, int data){
            Node* node = new_node(data);
            (*head) -> next = node ;
        }
        void pop(Node** head){
            Node* temp = *head;
            (*head) = (*head) -> next;
            int popped = temp -> data;
            free(temp);
        }
        
};