//Dublicate elem in an array
#include<iostream>
using namespace std;
void DublicateElem(int arr1[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr1[i]==arr1[j]){
                cout<<arr1[j]<<" ";
            }
        }
    }

}
int main(){
    int arr1[5]={1,2,3,1003,1};
    int n =5;
    DublicateElem(arr1,n);
}