#include <iostream>
using namespace std;
void selectionSort(int *arr, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int min = arr[i], minIndex = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < min)
            {
                min = arr[j];
                minIndex = j;
            }
        }
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
}

int main()
{
    int arr[7] = {0, 9, 43, 6, 3, 7, 1};
    selectionSort(arr, 7);
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}