//arrays
#include<iostream>
using namespace std;
int main(){
    int arr[23];
    int n =23;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    }
    cout<<"the value is"<<arr[22]<<endl;

    ///entiire array initalize by value 1
    for(int i=0;i<n;i++){
        arr[i]={1};
         cout<<arr[i]<<" ";
    }
    //size of an array
    int arrsize=sizeof(arr)/sizeof(int);
    cout<<"the size of "<<arrsize<<endl;
   
}