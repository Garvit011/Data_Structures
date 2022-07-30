#include<iostream>
#include "node.cpp"
using namespace std;

void takeinput(){
    int data,n,count=0;
    cin>>n;
    while(n--){
    cin>>data;
  
    Node * head = NULL;
    Node * tail =NULL;
     Node *newNode = new Node(data);
    while(data!=-1){
        if(head==NULL){
        head = newNode;}
        else{
           Node * temp  = head;
    while(temp->next!=NULL){           //This is not good for time complexitiy as n²  so we can use a tail node
        temp=temp->next;
    }
        temp->next= newNode;
        }
    }
        cin>>data;
        count++;
    }
    cout<<count;
    return head;
}

int main(){
    
    Node * head = takeinput();

    return 0;
}