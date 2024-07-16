//sorting(Insertion-sort)
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr={12,34,5,67,89};
    int n= arr.size();
    //round loop
    for(int i=1;i<n;i++){
        int temp = arr[i];
          int j =i-1;
        for(;j>=0;j--){
            if(arr[j]>temp){
arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=temp;
    }
    for(int i =0;i<n;i++){
        cout<<arr[i]<< "  " ;   
        }
}