// Move-Zeroes-In-Sequence-Order
#include <iostream>
using namespace std;
void PrintArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "  ";
    }
}
void MoveZeroes(int arr[], int n){
    int i=0;
    for(int j=0;j<n;j++){
        if(arr[j] != 0){
            swap(arr[j],arr[i]);
            i++;
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