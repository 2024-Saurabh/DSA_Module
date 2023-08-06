#include <iostream>
using namespace std;
int binarySearch(int *arr, int size, int x)
{
    int mid;
    int start = 0;
    int end = size - 1;
    while (start <= size)
    {
        mid = (start + end) / 2;
        if (arr[mid] == x)
        {
            return mid;
        }
        else if (x > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int arr[10] = {10, 30, 12, 15, 17, 34, 65};
    int x = 15;
    int index = binarySearch(arr, 7, x);
    cout << "Index of element 15 " << index << endl;

    return 0;
}