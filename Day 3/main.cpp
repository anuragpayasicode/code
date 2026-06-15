#include <iostream>
using namespace std;
int main()
{

    // prefix sum

    int sum = 0;
    int idx = 1;

    //  0    1    2    3    4

    //  for (int i = 0 ; i <= idx ; i ++){
    //         sum += arr[i];
    //  }

    // for (int i = 1; i < 5; i++)
    // {

    //     arr[i] = arr[i - 1] + arr[i];
    // }
    // int n = 3;
    // cout << arr[n];
    int arr[] = {10, 20, 30, 10, 50};
   
    for (int i = 0; i < 4; i++)
    {
 int sum1 = 0, sum2 = 0;
        for (int j = 0; j <= i; j++)
        {
            sum1 += arr[j];
        }
        for (int k = i + 1; k < 5; k++)
        {
            sum2 += arr[k];
        }

        if (sum1 == sum2)
        {
            cout << "True";
            return 0;
          
        }
        
    }
    cout<<"False";

    return 0;
}