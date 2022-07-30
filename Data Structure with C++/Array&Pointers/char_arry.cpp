#include<iostream>
using namespace std;

// int main(){
//     char s[]= "hello";
// char *p = s;
// cout << s[0] << " " << p[0];

// char b[] = "xyz";
// char *c = &b[0];
// c++;
// cout << c << endl;

void updateValue(int *p){
    *p = 610 % 255;
}


int main(){
    char ch = 'A';
    updateValue((int*)&ch);
    cout << ch;

    return 0;
}