#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int size;
    cin >> size;
    if(size <= 0){
        cout << "The array is empty";
        return 0;
    }

    vector<int> arr(size);
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    


    return 0;
}