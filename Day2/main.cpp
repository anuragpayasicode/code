#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    // int arr[]= {-2,1,-3,4,-1,2,1,-5,4};

    // int a = 100 ; int b = 20;

    //   int max , min ;
    //     if(a > b){
    //         max = a;
    //         min = b;
    //     }
    //     else{
    //         max= b;
    //         min = a;
    //     }

    // cout<<max<<" "<<min;

    //   cout<<"Maximum is :- "<<max(a , b)<<" and Minimum is :- "<<min(a , b)<<endl;

    // kadane's algorithim

    // 1. sum = 0;
    // 2. maxSum = arr[0];
    // 3. if sum < 0 sum =0

    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    int sum = 0;
    int maxSum = arr[0];

    for (int i = 0; i < 9; i++)
    {
        sum = sum + arr[i];
        maxSum = max(maxSum, sum);

        if(sum < 0) 
         {
              sum = 0;
         }
    }


    cout<<maxSum;
    return 0;
}

// write a program to return max and min of an array
// write a program to return all even and odd number in 2 seperate arrays
// write a program to print mean and median of a sorted array 
// write a program to print the following pattern: 
/*
1
12
123
1234
*/
