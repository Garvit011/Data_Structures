#include<iostream>
#include "Node.cpp"


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
        tail= newNode;  
  } 
  else{
    // tail = newNode;
    tail->next= newNode;
    tail = tail->next;
    Node * temp  = head;
    // while(temp->next!=NULL){           //This is not good for time complexitiy as n²  so we can use a tail node   
    //     temp=temp->next;
    // }
    //     temp->next= newNode;
  }
        cin>>data;
  }
  return head;
}


Node * insert_node(Node * head,int i ,int data){
    Node * newNode = new Node(data);
    Node * temp = head;
    int count =0;

    if(i==0){
        newNode->next=head;
        head = newNode;
        return head;
    }


    while(temp !=NULL && count < i-1 ){
            temp= temp->next;
            count++;
    }
    if(temp!=NULL){
        Node * a =temp->next;
        temp->next= newNode;
        newNode->next = a;
    }
    return head;

}
void print(Node * head){
    while(head!=NULL){
    cout<<head->data<< "-> ";
    head = head->next;
    }
    cout<<"END"<<endl;
}

int main(){
    cout<<"Enter the linked list nodes data  : "<<endl;
    Node * head = takeinput();
    cout<<"The nodes are-: "<<endl;
    print(head);
    int i , data;
    cout<<"Enter index and data -: "<<" ";
    cin>>i>>data;
    head= insert_node(head,i,data);
    cout<<"After inserting element the linked list is  "<<endl;
    print(head);
    // return 0;
}