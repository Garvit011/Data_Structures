#include<iostream>
using namespace std;

//no change
void incr1(int ** p){
    p=p+1;
}

//change
void incr2(int ** p){
    *p=*p+1;
}

//change
void incr3(int ** p){
   ** p=**p+1;
}


int main(){
    int i=20;
    int* p=&i;
    int ** p2= &p;

    cout<<*p2<<endl;    
    cout<<p<<endl;    
    cout<<&i<<endl;    



cout<<i<<endl;
cout<<*p<<endl;
cout<<**p2<<endl;
    return 0;
}