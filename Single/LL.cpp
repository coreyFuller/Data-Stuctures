#include <iostream>
#include <cstdlib>
using namespace std;


typedef struct Node {
  int data;
  struct Node * next;  
}Node;

class LinkedList {

private:

  Node * head;

public:

  LinkedList();
  void push_back(int );
  void print();
  void push_front(int );
  void pop_front();
  void deleteList();
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
  LL.deleteList();
  LL.print();
  return 0;
}

LinkedList::LinkedList() {

  head = NULL;

}

LinkedList::~LinkedList() {

  delete [] head;
  
}

void LinkedList::deleteList() {

  Node * temp;
  Node * current = head;

  while(current != NULL) {

    temp = current->next;
    current->next = NULL;
    free(current);
    current = temp;
    
  }

  head = NULL;
 
}

void LinkedList::pop_front() {

  Node * temp = head;
  head = head->next;
  temp->next = NULL;
  free(temp);

}
void LinkedList::push_front(int num) {

  Node * newNode = new Node;
  newNode->data = num;
  newNode->next = NULL;
  Node * temp = head;
  
  if (head == NULL) {
    head = newNode;
  }
  else {
    head = newNode;
    newNode->next = temp;
  }   
}

void LinkedList::push_back(int num){

  Node * newNode = new Node;
  Node * temp = head;
  newNode->data = num;
  newNode->next = NULL;
  
  if( head == NULL) {
    head = newNode;
   }

  else {
  while(temp->next != NULL) {
    temp = temp->next;
  }
  
  temp->next = newNode;
  }
}

void LinkedList::print() {

  Node * temp = head;

  if (head == NULL) {
    cout << "List is empty!" << endl << endl;
  }
  else {
  while(temp != NULL) {

    cout << temp->data << endl;;
    temp = temp->next;

  }
  
  cout << endl;
  }
}
