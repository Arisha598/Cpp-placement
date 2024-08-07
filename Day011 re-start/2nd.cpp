// Insertion Sort
#include <iostream>
using namespace std;
void PrintArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "   ";
    }
}
void InsertionSort(int arr[], int n)
{
    // Round
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        for (; j >= 0; j--)
        {
            if (arr[j] > temp)
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j + 1] = temp;
    }
}
int main()
{
    int arr[5] = {22, 3, 5, 7, 1};
    int n = 5;
    InsertionSort(arr, n);
    PrintArray(arr, n);
}