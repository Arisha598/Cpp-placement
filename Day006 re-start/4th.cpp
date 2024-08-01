//sum of all the element in an array
#include<iostream>
using namespace std;
int sum(int arr[],int n){
for(int i=0;i<n;i++){
    int sum = arr[i]+1;
     return sum;
}
}
int main(){
    int arr[10]={12,34,5,78,11,23,89,54,32,11};
    int n = sizeof(arr)/sizeof(int);
    cout<<sum(arr,n)<<endl;
}