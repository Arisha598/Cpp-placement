#include<iostream>
using namespace std;
int Uniqueno(int arr[],int n){
    int ans =0;
    for(int i=0;i<n;i++){
        ans = ans^arr[i];
    }
    for(int i=1;i<n;i++){
    ans=ans^i;;
    }
    return ans;
}
int main(){
    int arr[4]={1,2,2,4};
    int n = 4;
    cout<<"unique no is  : "<<Uniqueno(arr,n);
}