#include<iostream>
#include<string.h>

char infix[] ="a+b";
char PostFix[10];
char stack[10];
int top = -1; 

void push(char op){
    stack[++top] = op;
    std :: cout << "in push \n";
}
char pop(){
    int item = stack[top--];
    PostFix[++top] == item;
    std :: cout << "in pop \n ";
}
char precedence(char op){
    if (op == '+' || op == '-'){
        return 1 ;
    }
    else if (op == '*' || op == '/' || op == '%'){
        return 2 ;
    }
    else if (op == '^'){
        return 3 ;
    }
    else if (op == '(' || op == ')'){
        return 4 ;
    }
    else {
        std :: cout << "returning 0 ";
        return 0 ;
    }
}
bool Empty (){
    return (top < 0);
}
int main(){
    for(int i=0; i < strlen(infix); i++){
        if (precedence(infix[i]) == 0){
            std :: cout << "in major if \n";
            PostFix[++top] = infix[i];
        }
        else {
            std :: cout << "in major else \n";
            if(precedence(infix[i]) > stack[top]){
                push(infix[i]);
                std :: cout << "in major else first if \n";
            }
            else if(precedence(infix[i]) <= stack[top]){
                pop();
                push(infix[i]);
                std :: cout << "in major else first else if \n";
            }
            else {
                if(precedence(infix[i]) == '('){
                    if (precedence(infix[i]) == 0){
                        PostFix[++top] = infix[i];
                    }
                    else{
                        push(infix[i]);
                    }
                }
                else if(precedence(infix[i]) == ')'){
                    pop();
                }
            }
        }
    }    
    pop();

    return 0;
}
