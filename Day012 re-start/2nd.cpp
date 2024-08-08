// Move-Zeroes-on-RightSide
#include <iostream>
using namespace std;
void PrintArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "  ";
    }
}
void MoveZeroes(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == 0 && arr[j] != 0)
            {
                swap(arr[i], arr[j]);
                i++;
                j++;
            }
            else{
                i++;
                j++;
            
            }
        }
    }
}
int main()
{
    int arr[5] = {2, 0, 1, 3, 0};
    int n = 5;
    MoveZeroes(arr, n);
    PrintArray(arr,n);
}