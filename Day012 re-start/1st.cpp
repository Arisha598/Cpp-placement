// Merge-TwoSorted-Array
#include <iostream>
using namespace std;
void PrintArray(int ans[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << "  ";
    }
}
void SortedArray(int arr1[], int arr2[], int arr3[], int n, int m)
{
    int i = 0;
    int j = 0;
    int k = 0;
    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k] = arr1[i];
            k++;
            i++;
        }
        else
        {
            arr3[k] = arr2[j];
            k++;
            j++;
        }
    }
    while (i < n)
    {
        arr3[k] = arr1[i];
        k++;
        i++;
    }
    while (j < m)
    {
        arr3[k] = arr2[j];
        k++;
        j++;
    }
}
int main()
{
    int arr1[5] = {4, 5, 6, 7, 8};
    int arr2[3] = {1, 2, 3};
    int arr3[8] = {0};
    int n = 5;
    int m = 3;
    SortedArray(arr1, arr2, arr3, n, m);
    PrintArray(arr3, 8);
}