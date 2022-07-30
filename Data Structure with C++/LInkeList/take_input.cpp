#include<iostream>
// #include "Node.cpp"
class Node{
    public:
    int data;
    Node *next;
    Node(int data){
        this->data=data;
        next=NULL;
    }
};

int count =0;
using namespace std;

Node* takeinput(){
    int data;
    cin>>data;
  Node *  head = NULL;
  Node * tail= NULL;
  while (data!=-1)
  {
  Node * newNode = new Node(data);
  
  
  if(head==NULL){
        head = newNode;
  } 
  else{
    // tail = newNode;
    Node * temp  = head;
    while(temp->next!=NULL){           //This is not good for time complexitiy as n²  so we can use a tail node
        temp=temp->next;
    }
        temp->next= newNode;
  }
        cin>>data;
        count++;
  }

  return head;
}

void print(Node * head){
    while(head!=NULL){
    cout<<" -> "<<head->data<< " ";
    head = head->next;
    }
}

int main(){
    // Node n1(10);
    Node * head = takeinput();
    print(head);
      cout<<count;
    return 0;
}