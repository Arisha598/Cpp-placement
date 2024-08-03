//Intersection  of two array by second method 
#include<iostream>
using namespace std;
void itersection(int arr1[],int arr2[],int n,int m){
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(arr1[i]== arr2[j]){
            cout<<arr2[j]<<"  ";
        }
    }
}
}
int main(){
    int arr1[6]={1,2,5,60,23,57};
    int arr2[4]={4,34,90,60};
    int n=6;
    int m =4;
    itersection(arr1,arr2,n,m);
}