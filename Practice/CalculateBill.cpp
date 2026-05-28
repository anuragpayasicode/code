#include <iostream>
using namespace std;
int main()
{

    // 0 se 100 unit tak 10 rs unit lagega
    // 100 se 200 unit tak 20 rs unit lagega
    // 200 se 300 30 rs unit lagega
    // 300 se jada ke liye 50 rs lagega

    int reading;
    cout << "Enter reading of this Month" << endl;
    cin >> reading;

    if (reading > 0 && reading < 100)
    {
        cout << "Your Electricity Bill of This Month is :- " << reading * 10 <<"rs" << endl;
    }
    else if(reading > 99  && reading < 200){
        cout << "Your Electricity Bill of This Month is :- " << reading * 20 <<"rs" << endl;

    }else if (reading > 199 && reading < 300){
        cout << "Your Electricity Bill of This Month is :- " << reading * 30 <<"rs" << endl;

    }else if ( reading > 299){
        cout << "Your Electricity Bill of This Month is :- " << reading * 50 <<"rs" << endl;

    }
    else{
        cout<<"Enter valid input Only"<<endl;
    }

    return 0;
}