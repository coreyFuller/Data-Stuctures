#include "stack.hpp"

Node::Node(int d, Node * n) {
    data = d;
    next = n;
}

Stack::Stack() {
    head = nullptr;
    count = 0;
}

 void Stack::push(int num) {
    head = new Node(num, head);
    count++;
 }

void Stack::pop() {
    
    if(!head){
        cout << "List is empty!" << endl;
        return;
    }
    else {
        Node * temp = head;
        head = head->next;
        delete temp;
        count--;
    }
 }

 int Stack::peek() {

      if(head) {
          cout << "Top most element in the stack: " << head->data << endl; 
         return head->data;
     }
     else {
        return -1;
     }
   }

    int Stack::size() {
        cout << count << endl;
        return count;
    }
    void Stack::print() {
        if(head){
            cout << "Current working stack" << endl;
            for(Node * temp = head; temp; temp = temp->next) {
                cout << temp->data << endl;
            }
        }
        else {
            cout << "List is empty!" << endl;
        }
    }