//stl array
#include<iostream>
#include<array>
using namespace std;
int main(){
   //we can find the size of an array
    array<int,6> a ={2,6,7,8,99,4};
    int store = a.size();
    cout<<store<<endl;
    //print all elements in an array
    for(int i =0;i<store;i++){
        cout<<a[i]<<endl;
    }
    //we use at to acess the element in array
    cout<<a.at(3)<<endl;
}