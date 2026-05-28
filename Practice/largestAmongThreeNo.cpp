#include <iostream> 
using namespace std;
int main(){
     

    int a , b , c;
    cout<<"Enter the values of A , B and C"<<endl;
    cin>>a>>b>>c;

    if(a > b  &&  a > c){
              cout<<a<<" is Largest number";
    }
    else if (b > a && b > c){
        cout<<b<<" is Largest number";
    }
    else {
        cout<<c<<" is Largest number";
    }
    return 0;
}