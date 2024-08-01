//max element in an array
#include<iostream>
using namespace std;
int maxelelem(int arr[],int n){
int max =INT_MIN;
for(int i=0;i<n;i++){
    if(arr[i]>max){
        max=arr[i];
    }
}
return max;
}
int main(){
    int arr[12]={12,34,56,7,89,55,32,98,121,123,890};
    int n=12;
cout<<"the max element is"<< maxelelem(arr,n)<<endl;;
}