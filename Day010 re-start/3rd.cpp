// Selection-Sort
#include <iostream>
using namespace std;
void Print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "  ";
    }
}
void SelectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }

        swap(arr[i], arr[min]);
    }
}
int main()
{
    int arr[6] = {4, 6, 7, 8, 1, 3};
    int n = 6;
    SelectionSort(arr, n);
    Print(arr, n);
}