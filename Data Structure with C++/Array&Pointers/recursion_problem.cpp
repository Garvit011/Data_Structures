

// #include <iostream>
// using namespace std;

// int calculatePower(int, int);

// int main()
// {
//     int base, powerRaised, result;

//     cout << "Enter base number: ";
//     cin >> base;

//     cout << "Enter power number(positive integer): ";
//     cin >> powerRaised;

//     result = calculatePower(base, powerRaised);
//     cout << base << "^" << powerRaised << " = " << result;

//     return 0;
// }

// int calculatePower(int base, int powerRaised)
// {
//     if (powerRaised != 0)
//         return (base*calculatePower(base, powerRaised-1));
//     else
//         return 1;
// }




//Problem 2 :the code to print numbers from 1 to n in increasing order recursively

// #include<iostream>
// using namespace std;


// void series(int n){
    
//     if (n>=1){
//        series(n-1);
//        cout<<n<<" ";
// }
// else 
// cout<<"Not a valid natural number"<<endl;
// }
// int main(){
//     int a;
//     cout<<"Enter number upto which natural number you want :"<<endl;
//     cin >>a;
//     series(a);
    
//     return 0;
// }



//Problem 3 : code to print number of digit using recursion
#include<iostream>
using namespace std;
int num(int n){
    static int count=0;
    
    
    if(n!=0){
 
    count++;
    num(n/10);
    
    return count;
    
    }
}
int main(){
    int a;
    cout<<"Enter a number"<<endl;
    cin>>a;
   cout<<"The num of digit is " <<num(a)<<endl;
    
    
}