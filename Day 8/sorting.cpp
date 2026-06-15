#include <iostream>
#include <vector>

using namespace std;

void bubbleSort(vector<int> arr)
{
    int n = arr.size();

    for (int i = 0; i < n - 1; i++)
    {

        for (int j = 0; j < n - i - 1; j++)
        {

            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{

    vector<int> arr = {1, 5, 3, 8, 0};
    bubbleSort(arr);

    return 0;
}