#include "Queue.hpp"




int main() {

  Queue q;
  string command;
  string name;
  //int data;

  cout << "Command List: "  << endl;
  cout << "'add' to add a customer" << endl;
  cout << "'remove' to serve a customer " << endl;
  cout << "'print' to view the working directory " << endl << endl;

  while(1){
    cout << "Enter a command: ";
    cin >> command;
    if(cin.eof()) break;

    if(command == "add") {
      cout << "Name: ";
      cin >> name;
      q.enqueue(name);
    }
    else if(command == "remove") {
      q.dequeue();
    }
    else if(command == "print") {
      cout << endl << "Current working directory: " << endl;
      q.print();
    }
    else if(command == "quit") {
      break;
    }
    else {
      cout << "Error! Unknown command ' " << command << "'!\n";
    }
  }
  return 0;
}
 
