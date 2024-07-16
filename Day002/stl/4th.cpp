//stack
#include<iostream>
#include<stack>
using namespace std;
int main(){
    //lifo push operation
    stack<string>s;
    s.push("arisha");
    s.push("chaudhary");
    s.push("sharma");
    cout<<"the top at the stack is :"<<s.top();
    //pop operationn
    s.pop();
    cout<<"the top at the stack is :"<<s.top();
    //size
    cout<<"the size is :"<<s.size(); 
}