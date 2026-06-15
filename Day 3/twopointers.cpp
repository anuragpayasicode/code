#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // int arr[] = {2, 7, 11, 15, 16, 18, 25};
    // int target = 27;
    // int l = 0, r = 6;

    // int sum = 0;
    // while (l < r)
    // {
    //     sum = arr[l] + arr[r];

    //     if (sum == target)
    //     {
    //         cout <<"found at index " <<l <<" " << r ;
    //         return 0;
    //     }
    //     else if (sum < target)
    //     {
    //         l++;
    //     }
    //     else
    //     {
    //         r--;
    //     }
    // }

    vector<int> arr;
    arr = {10, 20, 30, 40};

    //    cout<<arr[0];
    // cout << arr.back();
    // cout<<arr.front();
    arr.push_back(100);
    arr.pop_back();
    // arr.pop_back();
    // cout << arr.back();
    // cout << arr.size();
    cout << arr.at(2);

    return 0;
}