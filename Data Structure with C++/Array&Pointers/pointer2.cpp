#include<iostream>
using namespace std;

int main(){
    int i=10;
    int *p = &i;
    cout<<sizeof(p)<<endl;
    cout<<p<<endl;
    cout<<(*p)++<<endl;
    p=p+2;
    cout<<p<<endl;
           double d=102.3 ;
        double *dp = &d;
        cout<<sizeof(d)<<endl;
        cout<<sizeof(dp)<<endl;

         char c =d;
         char *cp =&c;
         cout<<cp<<"chracter pointer"<<endl;
         cp=cp+1;
         cout<<cp<<"pointer size"<<sizeof(cp)<<endl;
         cout<<"character size"<<sizeof(c)<<endl;


int a = 7;
int *b = &a;
b = b + 1;
cout  << a << "  " << *b << endl;

    return 0;
}