#include <iostream>
#include <vector>

using namespace std;

int findTarget(vector<int> arr, int target)
{

    int start = 0;
    int end = arr.size() - 1;

    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (arr[mid] < target)
        { 
           start = mid + 1;
        }                         
        else if (arr[mid] > target)
        {
            end = mid - 1;
        }
        else 
        {
            return mid;
        }

    }
    return -1;
}




int LinearSearch(vector<int>arr , int target){
    // int s = 0 , e = arr.size() - 1;
    int n = arr.size();
    for(int i = 0 ; i < n ; i++){
        if(arr[i] == target){
            return i;
        }
    }

    return -1;
}

int binarySearch(vector<int>arr , int target){
         int s = 0;
         int e = arr.size()-1;
         while(s <= e){
            int mid = s + ( e - s )/2;

            if(arr[mid] > target){
                s = mid + 1;
            }
            else if(arr[mid] < target){
                e = mid - 1;
            }
            else{
                return mid;
            }
         }

         return -1;


         
}
int main()
{
    // find mid
    // if mid > target then we have to work on left side
    // if mid < target then we have to work on right side
    // if mid == target return mid
    // return -1
    // vector<int> arr = {-1, 0, 3, 5, 9, 12};
    vector<int> arr = {12, 9, 5, 3, 0, -1};
    int target = 4;

//    cout<< findTarget(arr , target);
cout<<binarySearch(arr , target);
//    cout<<LinearSearch(arr , target);
    return 0;
}