//swap alternate no
#include<iostream>
using namespace std;
void Printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    }
}
void swapAlternate(int arr[],int n){
    for(int i=0;i<n;i=i+2){
        if(i+1<n){
            swap(arr[i],arr[i+1]);
        }
    }
}
int main(){
    int arr[6]={1,4,5,7,9,8};
    int n=sizeof(arr)/sizeof(int);
swapAlternate(arr,n);
Printarray(arr,n);
}