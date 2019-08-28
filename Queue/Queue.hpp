#ifndef QUEUE_H
#define QUEUE_H
#include <iostream>
#include <fstream>
using namespace std;


struct Node {
  string name;
  Node * next;
  Node * prev;
  Node(string , Node *, Node *);
};



class Queue {

private:
  Node * head;
  Node * tail;
  ofstream output;

public:
  Queue();
  void enqueue(string );
  void dequeue( );
  void print();
  void write(string);
  ~Queue();

};


#endif
