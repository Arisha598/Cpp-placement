//min element
#include<iostream>
using namespace std;
int minelelem(int arr[],int n){
int min =INT_MAX;
for(int i=0;i<n;i++){
    if(arr[i]<min){
        min=arr[i];
    }
}
return min;
}
int main(){
    int arr[12]={12,34,56,7,89,55,32,98,121,123,890,122};
    int n=12;
cout<<"the minimunm element is"<< minelelem(arr,n)<<endl;;
}