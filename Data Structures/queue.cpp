#include<iostream>
#define size 20
class Queue{
    public :
        int front{};
        int back{};
        int* array{};
    Queue(){
        front = -1;
        back = -1;
        array = new int[size];
    }

    void Enqueue(int value){
        if (back == size-1){
            std :: cout << "Queue Overflow";
        }
        ++back;
        array[back] = value;

        if (front == -1){
            ++front;
        }
    }

    void Dequeue(){
        if(front > back || front == -1){
            std :: cout << "Queue Underflow";
            return;
        }
        ++front;
        
    }

    int peek(){
        if(front > back || front == -1){
            return -1;
        }
        return array[front];
        
    }
    bool Empty(){
        if(front > back || front == -1){
            return true; 
        }
        return false;
    }
};

