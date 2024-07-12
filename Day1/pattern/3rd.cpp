//Pattern-03
#include<iostream>
using namespace std;
void Pattern3(int n){
for(int i=0;i< n ;i++){
    for(int j = n;j>i;j--){
        cout<<"*";
    }
    cout<<endl;
}
}
int main(){
int n =5;
Pattern3(n);
}