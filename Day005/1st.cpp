//Merge-sort
#include<iostream>
#include<vector>
using namespace std;
void merge(int arr,int s,int e){
    int mid=(s+e)/2;
    int len1=mid-s+1;
    int len2=mid+1-e;

    //create the array
    int* first=new int[len1];
    int* second=new int[len2];

    //copy the array
    int mainarray_index=s;
    for(int i=0;i<len1;i++){
        first[i]=arr[mainarray_index++];
    }
    int mainarray_index=mid+1;
    for(int i=0;i<len2;i++){
        second[i]=arr[mainarray_index++];
    }
    //merge array
    int index1 = 0;
    int index2 = 0;
    mainarray_index=s;
    while(index1 < len1 && index2 < len2){
        if(first[index1] < second[index2]){
            arr[mainarray_index++]=first[index1++];
        }
        else{
            arr[mainarray_index++]=second[index2++]; 
        }
    }
    while(index1 < len1){
         arr[mainarray_index++]=first[index1++];
    }
    while(index2 < len2){
 arr[mainarray_index++]=second[index2++]; 
    }
    

}
void mergesort(int *arr,int s ,int e){
//base condidtion
if(s>e){
    return ;
}
int mid =(s+e)/2;
//left merge
mergesort(arr,s,mid);
//right sort
mergesort(arr,mid+1,e);
//merge
mergesort(arr,s,e);
}
int main(){
    int arr[5]={12,5,67,89,6};
    int n=5; 
    mergesort(arr[],0,n-1)

}