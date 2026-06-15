#include <iostream>
using namespace std;

int findNearestSqrt(int n)
{
    int i = 0;
    int lower;
    while (i * i <= n)
    {
        i++;
    }
    if (i * i == n)
    {
        return i;
    }
    else
    {
        lower = i - 1;
        if (n - lower * lower <= i * i - n){
            return lower;
        }else{
            return i;
        }
            
    }
}

int main()
{
    // int n;
    // cin >> n;

    // int i = 0;

    // while (i * i < n)
    // {
    //     i++;
    // }

    // if (i * i == n)
    // {
    //     cout << i;
    // }
    // else
    // {
    //     int lower = i - 1;

    //     if (n - lower * lower <= i * i - n)
    //         cout << lower;
    //     else
    //         cout << i;
    // }
    int n;
    cout << "Enter any number" << endl;
    cin >> n;
    cout << findNearestSqrt(n) << endl;
    return 0;
}

// Hint 1

// Find two consecutive numbers whose squares surround n.

// For n = 20:

// 4² = 16
// 5² = 25

// 16 < 20 < 25

// Hint 2

// Store both square roots:

// lower = 4;
// upper = 5;

// Hint 3

// Find how far n is from each square.

// 20 - 16 = 4
// 25 - 20 = 5

// Hint 4

// Compare the distances.

// 4 < 5

// Since 16 is closer to 20 than 25 is, choose the square root of 16.

// Answer = 4

// Hint 5 (Algorithm)
// Start with i = 0.
// Increase i until i * i >= n.
// If i * i == n, return i.
// Otherwise:
// lower = i - 1
// upper = i

// Compare:

// n - lower*lower

// and

// upper*upper - n
// Return the root whose square has the smaller distance.

