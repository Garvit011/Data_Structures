#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;


int lengtstr(char ch[]){
    if(ch[0]=='\0'){
    return 0;}
    int smalllength = lengtstr(ch+1);
    return 1+smalllength;
}
void removex(char ch[]){
    if(ch[0]=='\0'){
        return;
    }
   
    if(ch[0]!='x'){
        removex(ch+1);
    }
    else{
        int i=1;
        for(;ch[i]!='\0';i++){
            ch[i-1]=ch[i];
        }
    ch[i-1]=ch[i];
    removex(ch);
    }
  
}
    


int main(){
    char ch[200];
    cout<<"enter the string: \n"<<endl;
cin>>ch;
   cout<<lengtstr(ch)<<endl;
removex(ch);
cout<<ch;
   
    return 0;
}