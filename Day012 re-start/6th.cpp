//Rotate-Array
#include <iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    int n =5;
    int d =1;

    //print the elements of array after rotation
	cout<<"array elements after rotation : ";
	for(int i=0;i<n;i++)
	{
		cout<<arr[(i+d)%n]<<" ";
	}
}