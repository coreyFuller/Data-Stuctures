#include <iostream>
#include <cstdlib>
using namespace std;

typedef struct Node {
int data;
struct Node * prev;
struct Node * next;
}Node;

class LinkedList {

private:

Node * head;
Node * tail;

public:

LinkedList();
void push_back(int);
void print();
void printBack();
void push_front(int);
~LinkedList();

};

int main(int argc, char * argv[]) {

    LinkedList LL;
    LL.push_back(5);
    LL.push_back(2);
    LL.push_front(7);
    LL.push_back(3);
    LL.push_front(2);
     LL.print();
    LL.push_back(1);
     LL.printBack();
    LL.print();
    LL.printBack();


    return 0;

}

void LinkedList::push_front(int num) {

  Node * newNode = new Node;
  newNode->prev = NULL;
  newNode->next = NULL;
  newNode->data = num;
  Node * temp = tail;
  while (temp->prev != NULL) {
    temp = temp->prev;
  }
  temp->prev = newNode;
  head = newNode;
  newNode->next = temp;
}
LinkedList::LinkedList() {

    head = NULL;
    tail = NULL;

}


LinkedList::~LinkedList() {

    delete [] head;
    delete [] tail;
}

void LinkedList::push_back(int num) {

    Node * newNode = new Node;
    Node * temp = head;
    newNode->next = NULL;
    newNode->prev = NULL;
    newNode->data = num;
    if(head == NULL) {

        head = newNode;
        tail = newNode;
    }

    else {

        while(temp->next != NULL) {

            temp = temp->next;
        }

        temp->next = newNode;
        newNode->prev = temp;
        newNode->next = NULL;
        tail = newNode;
    }

}

void LinkedList::print() {

    Node * temp = head;
    while (temp != NULL) {
      cout << temp->data << endl;
        temp = temp->next;
    }
    cout << endl;
}

void LinkedList::printBack() {

    Node * temp = tail;
    while (temp != NULL) {
      cout << temp->data << endl;
        temp = temp->prev;
    }
    cout << endl;
}
