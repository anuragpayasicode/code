#include <iostream>
#include <vector>
using namespace std;

int findTarget(vector<int>arr , int target){
       int n = arr.size();
       int i = 0;
       while(i < n && arr[i] < target){
            i++;
       }
       return i;
}


int main()
{
   vector<int>arr = {1 , 2 , 3 , 5 , 7, 9};
   int target = 8;
    
   cout<<findTarget(arr , target);
    return 0;
}