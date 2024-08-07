//Reverse array
#include<iostream>
using namespace std;
void PrintArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"   ";
    }
}
int main(){
    int arr[5]={22,3,5,7,1};
    int n =5;
   int s=0;
   int e =n-1;
   while(s<=e){
    swap(arr[s],arr[e]);
    s++;
    e--;
   }
PrintArray(arr, n);
}