#include <iostream>
#include <vector>
using namespace std;


int findTarget(vector <int> arr , int target ){
    
    int n = arr.size()-1;

    for(int i = 0 ; i <= n ; i++){

        if(target == arr[i]){
            return i;
        }
    }
    return -1;
}



int main()
{  
    vector <int> arr = {10 , 20 , 30 , 50 , 60}; 
    int target = 50;
     
    
   cout<<findTarget(arr , target);


    return 0;
}