//Selection_sort
#include <iostream>
using namespace std;
void Print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    }
}
void SelectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j] < arr[min]){
                min =j;
            }
        }
            swap(arr[i],arr[min]);
        
    }
}
int main(){
    int arr[5]={12,45,67,2,15};
    int n=5;
    SelectionSort(arr,n);
    Print(arr,n);

}