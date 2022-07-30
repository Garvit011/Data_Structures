#include<iostream>
using namespace std;


// void increment(int& n){
//     n++;
// }
// int main(){
//     int i =10;
//     increment(i);
//     cout<<i<<endl;
//     // & used for reference and does not create additonal memory for j because it contain memory address of i
//     int & j =i;
// i++;
//     cout<<j<<endl;
// j++;
// cout<<i<<endl;

// int k=100;
// j=k;
// cout<<i<<endl;
//     return 0;
// }


void func(int i, int& j, int p){
    i++;
    j++;
    p++;
}

int main(){
    int i = 10;
    int j = 6;
    int &p = i;
    func(i, j, p);
    cout << i << " " << j << " " << p;
}