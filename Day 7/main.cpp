#include <iostream>
#include <vector>
using namespace std ;

 int maximumCount(vector<int>& nums) {
        int n = nums.size();
        int left = 0, right = n -1,  firstZero = n;

        while(left<=right){
            int mid = left + (right - left)/2;
            if(nums[mid]>=0){
                firstZero = mid;
                right = mid - 1;
            }else{
                left = mid + 1;
            }
        }
        int negativeCount = firstZero;

        left = 0;
        right = n -1;
        int firstPositive = n;

        while(left<=right){
            int mid = left + (right - left)/2;
            if(nums[mid]> 0){
                firstPositive = mid ;
                right = mid - 1;
            }else{
                left = mid + 1;
            }
        }
        int PositiveCount = n - firstPositive;

        return max(negativeCount , PositiveCount);
    }


int main(){
    vector <int> arr = {-2,-1,-1,1,2,3};

     cout<<maximumCount(arr);
    
}