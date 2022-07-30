// #include<iostream>
// using namespace std;


// bool isSorted(int a[],int size){
//     if(size==0 || size==1){
//         return true;
//     }

//     if( a[0]> a[1])
// {
//     return false;
// }
//     bool is_smallSorted = isSorted(a+1,size-1);
//     return is_smallSorted;

// }
// int main(){
    
//     return 0;
// }
// #include <stdio.h>
 
// // Return sum of elements in A[0..N-1]
// // using recursion.
// int findSum(int A[], int N)
// {
//     if (N <= 0)
//         return 0;
//     return (findSum(A, N - 1) + A[N - 1]);
// }
 
// // Driver code
// int main()
// {
//     int A[] = { 1, 2, 3, 4, 5 };
//     int N = sizeof(A) / sizeof(A[0]);
//     printf("%d\n", findSum(A, N));
//     return 0;
// }




// SOLUTION:-
#include<iostream>
using namespace std;

int sum(int input[],int n)
{


    if(n==1)
        return input[n-1];
    return input[n-1]+sum(input,n-1);
}
int main(){
    int n;
    cin >> n;
  
    int *input = new int[n];
    
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    
    cout << sum(input, n) << endl;
}

