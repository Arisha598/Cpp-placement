// total no of occurence
#include <iostream>
using namespace std;
int Firstocc(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = 0;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }
        if (key > arr[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int Lastocc(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = 0;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }
        if (key > arr[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
void Totalocc(int arr[],int n,int key){
    int ans1 = Firstocc(arr, 5, 3);
    int ans2 = Lastocc(arr, 5, 3);
    int totaloccurence = (ans2-ans1)+1;
    cout<<"the totalocc is "<<totaloccurence;
}
int main()
{
    int arr[5] = {1, 3, 3, 4, 7};
    int n = 5;
    int key = 3;   
    cout << "The first occurence of an element is " << Firstocc(arr, 5, 3) << endl;
    cout << "The last occurence of an element is " << Lastocc(arr, 5, 3)<<endl;
    Totalocc(arr,5,3);
}