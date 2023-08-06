#include<iostream>
#include<string.h>
using namespace std ;

struct Node {
    int data {};
    Node* left ,* right;
    
    Node (int data){
        this -> data = data ;
        left , right = NULL;
    }
};

void pre_order(struct Node* node){
    if (node == NULL){
        return ;
    }
    cout << node ->data ;
    pre_order(node ->left);
    pre_order(node ->right);
}
void in_order(struct Node* node){
    if (node == NULL){
        return ;
    }
    in_order(node->left);
    cout << node->data << "->";
    in_order(node->right);
}
void post_order(struct Node* node){
    if (node == NULL){
        return ;
    }
    post_order(node->left);
    post_order(node->right);
    cout << node->data << "->";
}