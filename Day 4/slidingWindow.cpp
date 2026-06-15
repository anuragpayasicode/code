#include <iostream>
using namespace std;
int main()
{

    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;
    int k = 3;

    int currentSum = 0;

    for (int i = 0; i < k; i++)
    {
        currentSum += arr[i];
    }

    int maxSum = currentSum;


    for (int i = 1; i <= n - k; i++)
    {
        currentSum = currentSum - arr[i - 1] + arr[i + k - 1];
     

        if (currentSum > maxSum)
        {
            maxSum = currentSum;
        }
    }

    cout << "Maximum sum of Sub array is :- " << maxSum << endl;

    return 0;
}