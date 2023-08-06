#include<iostream>
#include<string.h>
#define Max 1000 

class stack {
    private : 
        int top{};
        char mystack[Max];
    public:
        stack(){top = -1 ;}
        void push (char op); 
        char pop();
        bool IsEmpty();
        bool IsFull();
};

void stack :: push(char op){
    if(stack :: IsEmpty()){
        mystack[++top] = op;
        std :: cout << "pushing character " << op ; 
    }
    else {
        std :: cout << "Stack overflow";}
}

char stack :: pop(){
    if(top < 0 ){
        std :: cout << "Stack underflow \n";
    }
    else{
        int item = mystack[top--] ;
        return item;
    }
}

bool stack:: IsEmpty(){
    if(top == -1){
        std:: cout << "Stack is Empty! \n";
        return true;}
}

bool stack :: IsFull(){
    if (top == Max){
        return true; 
    }
}

int main(){
    stack Stack ;
    Stack .push('+');
    Stack.pop();
    return 0 ;
}