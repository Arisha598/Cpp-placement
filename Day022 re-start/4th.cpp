//reverse the stack
#include <iostream>
#include <stack>
using namespace std;
void InsertatBottom(stack<int>s,int target){
    if(s.empty()){
        s.push(target);
        return;
    }
    int Topelement=s.top();
    s.pop();
    //recc call
    InsertatBottom(s,target);
    s.push(Topelement);
}
void reverseStack(stack<int>&s){
    if(s.empty()){
        return;
    }
    int target=s.top();
    s.pop();
    //reccc call
    reverseStack(s);
    InsertatBottom(s,target);


}
int main(){
    stack<int>s;
    s.push(10);
    s.push(20);
    s.push(30);
    reverseStack(s);

    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }cout<<endl;

}