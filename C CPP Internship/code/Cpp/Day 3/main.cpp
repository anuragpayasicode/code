#include <iostream>
using namespace std;


int smallestNumberinarray(int arr[] , int n){
    int smallestNo = arr[0];
     for(int i  = 0;  i<n; i++){
        if(arr[i] < smallestNo){
            smallestNo = arr[i];
        }
     }
     return smallestNo;
}

  void fabonacciSeries(int n){
    int a = 0 , b = 1 , next = 0;
    for(int i = 1 ; i<=n ; i++){
         

        cout<<a<<" ";
        next = a + b;
        a = b;
        b = next ;
    }

  }

// int void
int main()
{

    int arr[] = {10, 20, 30, 40, 6, 7};
    int size  = sizeof(arr) / sizeof(arr[0]);

    int smallestNo1 = smallestNumberinarray(arr , size);
    cout<<"For fisrt array "<<smallestNo1<<endl;

    int arr2[] = {10, 20, 30, 40, 16, 7};
    int smallestNo2 = smallestNumberinarray(arr2 , size);
    cout<<"For second array"<<smallestNo2<<endl;

    fabonacciSeries(17);
    return 0;
}

