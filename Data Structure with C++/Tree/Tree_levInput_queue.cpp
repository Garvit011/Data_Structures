#include<iostream>
#include<queue>
#include "TreeNode.h"
using namespace std;

TreeNode<int>* takeLevelInput(){
    int rootdata;
    cout<<"Enter root data ";
    cin>>rootdata;
    TreeNode<int>* root = new TreeNode<int>(rootdata);
    
    queue<TreeNode<int>*> pendingNodes;

    pendingNodes.push(root);
    while(pendingNodes.size()!=0){
        TreeNode<int>* front = pendingNodes.front();
        pendingNodes.pop();
        cout<<"Enter num of children of "<<front->data<<endl;
        int numChild;
        cin>>numChild;
        for(int i=0;i<numChild;i++){
            int childData;
            cout<<"Enter "<<i<<" th child of "<<front->data<<endl;
            cin>>childData;
            TreeNode<int>* child = new TreeNode<int>(childData);
            front->children.push_back(child);
            pendingNodes.push(child);
        }
    }
    return root;
}

void printTree(TreeNode<int>* root){
    //edge case
    if(root==NULL){
        return;
    }
cout<<root->data<<":";
for (int i = 0;i< root->children.size();i++)
{
    cout<<root->children[i]->data<<",";
}
cout<<endl;



    for(int i=0;i<root->children.size();i++){
        printTree(root->children[i]);
    }
}


int main(){
      
      TreeNode<int>* root= takeLevelInput();
    printTree(root);
    return 0;
}