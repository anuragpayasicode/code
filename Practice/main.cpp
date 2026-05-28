#include <iostream>
using namespace std;
int main()
{

    int a;
    cout << "Enter any number" << endl;
    cin >> a;

    if (a == 0)
    {
        cout << "Number is 0";
    }
    else if (a > 0)
    {
        cout << "Number is Positive";
    }
    else {
        cout<<"Number is negative";
    }

    return 0;
}