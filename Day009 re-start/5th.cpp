//Peak Element in an array
#include <iostream>
using namespace std;
int PeakElement(int arr[],int n){
    int s=0;
    int e=n-1;
    int mid =s+(e-s)/2;
    while(s<e){
        if(arr[mid] < arr[mid+1]){
            s = mid +1;
        }
        else{
            e =mid;
        }
         mid =s+(e-s)/2;
    }

return s;
}

int main(){
    int arr[4]={3,4,5,1};
    int n =4;
    cout<<"The peak elem is "<<PeakElement(arr,n);
}