//Sorting (Bubble sort)
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr={12,4,5,67,89,6};
    int n = arr.size();
    //for round
    for(int i=1;i<n;i++){
        for(int j =0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    }
}
