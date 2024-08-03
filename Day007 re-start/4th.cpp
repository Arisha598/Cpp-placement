//Intersection  of two array
#include<iostream>
using namespace std;
void itersection(int arr1[],int arr2[],int n,int m){
for(int i=0;i<n;i++){
    int element1=arr1[i];
    for(int j=0;j<m;j++){
        if(element1 == arr2[j]){
            cout<<arr2[j]<<"  ";
        }
    }
}
}
int main(){
    int arr1[4]={1,2,5,60};
    int arr2[3]={4,5,8};
    int n=4;
    int m =3;
    itersection(arr1,arr2,n,m);
}