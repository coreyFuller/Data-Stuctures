#ifndef STACK_HPP
#define STACK_HPP
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node * next;
    Node(int, Node *);
};

class Stack{
    private:
        Node * head;
        int count;
    public:

    Stack();
    void push(int);
    void pop();
    int peek();
    int size();
    void print();
   

};














#endif 