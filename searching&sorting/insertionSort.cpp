#include <iostream>
using namespace std;
void insertionSort(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        int current = arr[i];
        int j;
        for (j = i - 1; j >= 0; j--)
        {
            if (arr[j] > current)
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j + 1] = current;
    }
}

int main()
{
    int arr[7] = {0, 9, 43, 6, 3, 7, 1};
    insertionSort(arr, 7);
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}