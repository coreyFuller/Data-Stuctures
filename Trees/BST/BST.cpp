#include <bits/stdc++.h>
using namespace std;

struct Node
{
  int data;
  Node * left;
  Node * right;
  Node(int d){data = d; left = NULL; right = NULL;}
};

Node * insert(Node * root, int data)
{
  if(!root){return new Node(data);}
  if(data < root->data){root->left = insert(root->left, data);}
  else {root->right = insert(root->right, data);}
  return root;
}

Node * search(Node * root, int data)
{
  if(!root) {return NULL;}
  if(root->data == data){return root;}
  if(data < root->data){return search(root->left, data);}
  else{return search(root->right, data);}
}

void print(Node * root)
{
  if(!root){return;}
  print(root->left);
  cout << root->data << endl;
  print(root->right);
}

void split(Node * root, int pivot, Node ** one, Node * two)
{
  if(!root){return;}

  

}

Node * join(Node * root)
{
  if(!root){return NULL;}


  return root;
}

void remove(Node * root, int data)
{

  
}

int main(int argc, char ** argv) {

  srand(time(0));
  Node * root = NULL;
  Node ** one = NULL, two = NULL;
  int elem = 0;
  for(int i = 0; i < 10; i++)
  {
    int num = rand() %257;
    while(search(root, num)){num = rand() % 257;}
    root = insert(root, num);
  }
  print(root);

  cout << "Enter element to insert to the tree: ";
  cin >> elem;
  if(search(root, elem)) cout << "Element already present in tree." << endl;
  else root = insert(root, elem);
  print(root);
  return 0;
}
