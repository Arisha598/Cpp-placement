//pattern
#include<iostream>
using namespace std;
void Print3(int n){
for(int i =1;i<=n;i++){
    for(int j=1;j<=i;j++){
cout<<j<<" ";
    }
}
cout<<endl;
}
int main(){
    int t;
    for(int i=0;i<t;i++){
int n =5;
Print3(n);
    }
}