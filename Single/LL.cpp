#include <iostream>
using namespace std;


struct Node {
  int data;
  Node * next;
  Node(){data = 0; next = nullptr;}
  Node(int d, Node * n) {data = d; next = n;}
};

class LinkedList {

private:

  Node * head;

public:

  LinkedList();
  void push_back(int );
  void print();
  void push_front(int );
  void pop_front();
  ~LinkedList();
};



int main(int argc, char * argv[]) {

  LinkedList LL;
  LL.push_back(5);
  LL.push_back(2);
  LL.push_back(3);
  LL.push_back(3);
  LL.print();
  LL.pop_front();
  LL.print();
  LL.push_back(4);
  LL.print();
  LL.push_front(10);
  LL.print();
  return 0;
}

LinkedList::LinkedList() {
   head = nullptr;
}

LinkedList::~LinkedList() {

  cout << "Deleting List..." << endl;
  Node * current = head;

  while(head) {
    current = head->next;
    delete head;
    head = current;
  }
  print();
}

void LinkedList::pop_front() {

  if(head) {
  Node * temp = head;
  head = head->next;
  delete temp;
  }
}

void LinkedList::push_front(int num) {

  head = new Node(num, head);
}

void LinkedList::push_back(int num){

  Node * newNode = new Node(num, nullptr);
  Node * temp = head;
  
  if(!head) {
    head = newNode;
   }
  else {
  while(temp->next) {
    temp = temp->next;
  }
  temp->next = newNode;
  }
}

void LinkedList::print() {

  if(head) {
    for(Node * temp = head; temp; temp = temp->next) {
    cout << temp->data << endl;
    }
    cout << endl;
  }
  else return;
}
