#include "Queue.hpp"


Queue::Queue() {

  head = nullptr;
  tail = nullptr;
  output.open("DailyReceipt.txt");
  output << "Account of customers served today: " << endl << endl;
}

Node::Node(string n, Node * _next, Node * _prev) {
  name = n;
  next = _next;
  prev = _prev;
}

void Queue::print() {
  if(!head || !tail) {
    cout << "Queue is empty!" << endl;
    return;
  }
  
 for(Node * temp = head; temp; temp = temp->next) {
   cout << temp->name << endl;
  }
 cout << endl;
}
void Queue::enqueue(string name) {
  Node * newNode = new Node(name, nullptr, tail);
  Node * temp = tail;
  write(name);
  if(!head) {
    head = newNode;
    tail = head;
    return;
  }
  else {
    newNode->prev = tail;
    temp->next = newNode;
    tail = newNode;
  }
}

void Queue::dequeue() {

  Node * temp = head;
  if(!head) {
    cout << "Queue is empty!" << endl;
    return;
  }
  else {
    head = head->next;
    delete temp;
    
  }
}

void Queue::write(string name){

  output << name << endl;
}

Queue::~Queue() {

  //  delete head;
  // delete tail;
  
}
