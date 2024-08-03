//return unique no
#include<iostream>
using namespace std;
int Uniqueno(int arr[],int n){
    int ans =0;
    for(int i=0;i<n;i++){
        ans = ans^arr[i];
    }
    return ans;
}
int main(){
    int arr[7]={2,3,4,2,3,4,5};
    int n = 7;
    cout<<"unique no is  : "<<Uniqueno(arr,n);
}