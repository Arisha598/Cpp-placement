// Merge Two Sorted Arry
#include <iostream>
using namespace std;
void MergeTwoArray(int arr1[], int arr2[], int arr3[], int n, int m)
{
    int i = 0;
    int j = 0;
    int k = 0;
    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k] = arr3[i];
            k++;
            i++;
        }
        else
        {
            arr3[k] = arr3[j];
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

void PrintArray(int arr3[], int n)
{
    for (int i = 0; i < 6; i++)
    {
        cout << arr3[i] << "   ";
    }
}

int main()
{
    int arr1[3] = {4, 5, 6};
    int arr2[3] = {1, 2, 3};
    int arr3[6] = {0};
    int n, m = 3;
    MergeTwoArray(arr1, arr2, arr3, 3,3);
    PrintArray(arr3, 6);
}