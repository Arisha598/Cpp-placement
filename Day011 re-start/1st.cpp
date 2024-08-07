//Bubble-Sort
#include<iostream>
using namespace std;
void PrintArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"   ";
    }
}
void BubbleSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i] > arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
}
int main(){
    int arr[5]={22,3,5,7,1};
    int n =5;
    BubbleSort(arr,n);
    PrintArray(arr,n);

}