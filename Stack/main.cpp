#include "stack.hpp"


int main(int argc, char * argv[]) {

    Stack stack;
    string command;
    int num;

    cout << "Stack menu: " << endl;
    cout << "'Insert' to push" << "\n" << "'Remove' to pop" << "\n";
    cout << "'Peek' to see the top most element\n'Size' to see the size of stack" << endl;
    cout << "'Print' to see the entire working stack" << endl;
    cout << "'End to quit" << endl << endl;
   
    while(1) {
 
        cout << "Enter a command: ";
        cin >> command;
        if ( command == "Insert" || command == "insert"){
             cout << "Enter a number for the stack: ";
                cin >> num;
            stack.push(num);
        }
        else if(command == "Remove" || command == "remove") 
            stack.pop();
        else if(command == "peek" || command == "Peek") 
            stack.peek();
        else if (command == "size" || command == "Size")
            stack.size();
        else if(command == "print" || command == "Print")
            stack.print();
        else if (command == "quit" || command == "Quit")
            break;
        else {
            cout << "Unknown command " << command << endl;
        }
        }



    return 0;
}