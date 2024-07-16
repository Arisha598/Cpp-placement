//deque same as list
#include<iostream>
#include<deque>
using namespace std;
int main(){
//push operation
    deque<int>d;
    d.push_back(23);
    d.push_back(20);
    for(int i:d){
 cout<<i<<endl;
    }
    //emptyor not
    cout<<"the deque is empty or not :"<<d.empty();
    cout<<endl;
    //erase operation is used:
    d.erase(d.begin(),d.begin()+1);
    cout<<"the size is "<< d.size();
   
}