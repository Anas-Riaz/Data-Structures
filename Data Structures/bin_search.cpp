#include<iostream>
#include<string>

using namespace std;

struct Node{
    int data; 
    Node* left , *right;
};

struct Node* newNode(int data){
    struct Node* node = (struct Node *) malloc(sizeof(struct Node));
    node-> data = data;
    node-> left = NULL;
    node-> right = NULL;
    return (node);
}

void inorder(Node* node){
    if(node != NULL){
        inorder(node->left);
        cout << node -> data << "->";
        inorder(node->right);
    }
}