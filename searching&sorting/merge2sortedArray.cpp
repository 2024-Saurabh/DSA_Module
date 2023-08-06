#include <iostream>
using namespace std;
void merge2SortedArray(int *arr1, int size1, int *arr2, int size2, int *ans)
{
    int i = 0, j = 0, k = 0;
    while (i < size1 && j < size2)
    {
        if (arr1[i] <= arr2[j])
        {
            ans[k] = arr1[i];
            i++;
        }
        else
        {
            ans[k] = arr2[j];
            j++;
        }
        k++;
    }
    while (i < size1)
    {
        ans[k] = arr1[i];
        i++;
        k++;
    }
    while (j < size2)
    {
        ans[k] = arr2[j];
        j++;
        k++;
    }
}

int main()
{
    int arr1[5] = {0, 1, 2, 3, 4};
    int arr2[5] = {5, 6, 7, 8, 9};
    int ans[10];
    merge2SortedArray(arr1, 5, arr2, 5, ans);
    for (int i = 0; i < 10; i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}