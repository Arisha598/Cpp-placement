//trriplet sum 
#include<iostream>
using namespace std;
void TripletSum (int arr[],int n,int Sum){
    int temp=0;
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        for(int k=j+1;j<n;k++){
            if(arr[i]+arr[j]+arr[k] == Sum){
                cout<<arr[i] << arr[j] << arr[k] <<endl;
                temp++;
            }
        }
    }
}
}
int main(){
    int arr[7]={5,3,1,6,8,7,2};
    int n =7;
    int Sum = 9;
    TripletSum (arr,n,Sum);

}