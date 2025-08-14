#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int size;
    cin >> size;

    if (size <= 0)
    {
        cout << "Array is Empty";
        return 0;
    }

    vector<int> arr(size);
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int smallest = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }
    cout << "The smallest element is : " << smallest;
    return 0;
}