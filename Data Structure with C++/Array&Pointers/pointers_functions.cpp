#include<iostream>
using namespace std;


// void print(int *p){
//     cout<<*p<<endl;
// }

//  void incrementPointer(int* p){
//      p=p+1;
//  }
// void increment(int *p){
//     (*p)++;
// }



// int main(){
//  int i=10;
//  int*p=&i;


//  print(p);

//  cout<<p<<endl;
//  incrementPointer(p);
//  cout<<p<<endl;

// cout<<*p<<endl;
// increment(p);
// cout<<*p<<endl;
//     return 0;
// }

//Array and pointers function
void fun(int a[]) {
    cout << a[0] << " ";
}

int main() {
    int a[] = {1, 2, 3, 4};
    fun(a + 1);
    cout << a[0];
}

// void square(int *p){
//  int a = 10;
//  p = &a;
//  *p = (*p) * (*p);
// }

// int main(){
//  int a = 10;
//  square(&a);
//  cout << a << endl;
// }