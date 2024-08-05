// linear search
#include <iostream>
using namespace std;
int LinaerSearch(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == key)
            {
                return i;
            }
        }
          return -1;
    }
}
int main()
{
    int arr[5] = {3, 6, 7, 88, 15};
    int n = 5;
    int key = 8;
    int ans = LinaerSearch(arr, n, key);
    cout << "The element at index " << ans;
}