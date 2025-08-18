#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int secondSmallest(vector<int> &arr)
{
    if (arr.size() < 2)
        return -1;

    sort(arr.begin(), arr.end());

    int smallest = arr[0];
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] > smallest)
        {
            return arr[i];
        }
    }
    return -1;
}

int main()
{
    int size;
    cin >> size;
    if (size <= 0)
    {
        cout << "The array is empty";
        return 0;
    }

    vector<int> arr(size);
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int result = secondSmallest(arr);
    if (result == -1)
    {
        cout << "All elements in array is same";
    }
    else
    {
        cout << "Second smallest element in the array is : " << result;
    }

    return 0;
}