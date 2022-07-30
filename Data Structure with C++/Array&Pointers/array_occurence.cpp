#include<iostream>
using namespace std;

int occurence(int *p,int n ,int a){
    int i,j;
    if(p==0){
        return -1;
    }
    for(i=0;i<n;i++){
        if(p[i]==a){
            return i;
            break;}
            else 
            return 0;}
        
        for(j=n-1;j>=0;j++){
            if(p[j]=a){
                return n-j;
                break;}
            else
            return 0;
            
        }
    }


int main(){
    int i,n,a,x;
    int *p= new int [n];
    cin>>n;
    for(i =0;i<n;i++){
        cin>>p[i];
    }
    for(i=0;i<n;i++){
        cout<<p[i]<<endl;
    }
    cout<<"enter number to find occurenece"<<endl;
    cin>>a;
    cout<<occurence(p,n,a);
    return 0;
}