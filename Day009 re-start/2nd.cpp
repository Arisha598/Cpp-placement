// Binary Search
#include <iostream>
using namespace std;
int BinarySearch(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    int mid = (start + end) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        //right part
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        //left part
        else
        {
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }
    return -1;
}
int main()
{
    int arr[6] = {4, 6, 85, 2, 12, 45};
    int n = 6;
    int key = 80;

    int ans = BinarySearch(arr, n, key);
    cout << "The element at index " << ans;
}