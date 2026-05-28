#include <iostream> 
using namespace std;
int main(){
   

    int Year;
    cout<<"Enter any Year"<<endl;
    cin>>Year;

    if(Year % 4 == 0 && Year % 100 != 0){
        cout<<Year<<" is Leap year";
    }
     else if(Year % 400 == 0){
        cout<<Year<<" is Leap year";
        
     }
     else {
        cout<<Year<<" is not a Leap Year";
     }
    return 0;
}