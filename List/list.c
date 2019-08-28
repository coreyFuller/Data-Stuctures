
#include "list.h"


void deleteNum(int num) {

  Node * temp;
  Node * current = head;
  printf("Removing person %d from the list...\n", num);
  if (head == NULL){
    printf("List is empty!\n");
    return;
  }
else if (head->key == num) {
    head = head->next;
    current->next = NULL;
    free(current);
    return;
  }
 else if (current->next == NULL) {
     free(current);
       return;
   }
 else{
  while(current != NULL) {
    temp = current;
    current = temp->next;
	if(current->key == num) {
	  temp->next = current->next;
	  current->next = NULL;
	  free(current);
	  current = temp->next;
	  return;
	}
  }
 }
}
 
void delete() {

  Node * temp;
  Node * current;
  current = head;
  printf("Deleting entire list.\n");
  sleep(1);
  while( current!= NULL) {
    temp = current->next;
    free(current);
    current = temp;   
  }
  head  = NULL;
}


void push_front(int count) {

  Node * temp = head;
  Node * newNode = (Node*)malloc(sizeof(Node));;
  newNode->key = count;
  printf("Enter a  name of a person to put in the front of the list: ");
  scanf("%s", newNode->lName);
  head = newNode;
  newNode->next = temp;
 
}

void add(int count) {

    Node * newNode = (Node *)malloc(sizeof(Node));
    newNode->key = count;
    scanf("%s", newNode->lName);

    Node * temp = head;
    newNode->next  = NULL;

    if (newNode == NULL) {
        printf("Space not available for a new employee.");
        exit(-1);
    }

    if(head == NULL) {
        head = newNode;
    }

    else {
        while(temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void search(int num, char * name) {
    Node * temp = head;
    while (temp != NULL) {
        if (temp->key == num) {
	  strcpy(name, temp->lName);
        }
        temp  = temp->next;
    } 
}

void print() {

  sleep(1);
  printf("New List: \n");
    Node * temp = head;

    if(head ==  NULL) {
      printf("List is empty.\n");
    }
    else {
    while(temp != NULL) {
        printf("%d: %s", temp->key, temp->lName);
        printf("\n");
        temp = temp->next;
    }
    }
    printf("\n");
}

void pop_front() {
  
  Node * temp = head;
  printf("Removing person in the front of the list: \n");
  sleep(1);
  head = head->next;
  temp->next = NULL;
  free(temp);

}
