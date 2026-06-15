// Selection sort
#include <iostream>
#include <vector>
using namespace std;

// void selectionSort(vector<int> arr)
// {
//     int size = arr.size();
//     for (int i = 0; i < size - 1; i++)
//     {
//         int smallestIndex = i;
//         for (int j = i + 1; j < size; j++)
//         {
//             if (arr[j] < arr[smallestIndex])
//             {
//                 smallestIndex = j;
//             }
//         }
//         swap(arr[smallestIndex], arr[i]);
//     }

//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

void selectionSort(vector<int> arr)
{
    int n = arr.size();
    for (int i = 0; i < n - 1; i++)
    {
        int smallestInxed = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[smallestInxed])
            {
                smallestInxed = j;
            }
        }
        swap(arr[i], arr[smallestInxed]);
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    vector<int> arr = {1, 2, 9, 0, 8,5, 4, 6, 7, 3};
    selectionSort(arr);
    return 0;
}