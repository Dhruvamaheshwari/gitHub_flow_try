#include <iostream>
using namespace std;
int main()
{
    int size;
    cin >> size;

    int arr[size];

    if (size <= 0)
    {
        cout << "Array is Empty";
    }
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int largest = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    cout << "Largest Element in the array is : " << largest;

    return 0;
}