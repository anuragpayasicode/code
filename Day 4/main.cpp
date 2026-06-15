#include <iostream>
#include <string>

using namespace std;
int main()
{
    string name = "naman";

    int l = 0, r = name.length() - 1;

    while (l < r)
    {
        if (name[l] != name[r])
        {
            cout << "False";
            return 1;
        }
        l++;
        r--;
    }

    cout << "True";
    return 0;
}