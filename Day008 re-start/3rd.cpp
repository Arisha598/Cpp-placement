//Sort 0 and 1 
#include<iostream>
using namespace std; 
void Print(int arr[],int n){
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
}
void Sortno(int arr[],int n){
    int left =0;
    int right=n-1;
    while(left < right){
        while(arr[left] == 0){
            left++;
        }
         while(arr[right] == 1){
            right--;
        }
        if(arr[left] ==1 && arr[right] == 0 && left<right){
         swap(arr[left],arr[right]);
        left++;
        right--;
    }
    }
}
int main(){
int arr[6]={0,1,0,1,1,0};
int n=6;
Sortno(arr,n);
Print(arr,n);
}