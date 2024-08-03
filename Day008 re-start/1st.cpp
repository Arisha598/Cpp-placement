//Pair Sum
#include<iostream>
using namespace std;
void SumPair(int arr[],int n,int sum){
    int temp=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j] == sum){
                cout<<"the sum of two no is "<<arr[i] <<"  and  "<<arr[j]<<endl;
                temp++;
            }
        }
    }
}

int main(){
    int arr[5]={1,2,3,4,1};
    int n =5;
    int sum = 5;
    SumPair(arr,n,sum);
}