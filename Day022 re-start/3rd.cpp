// Reverse The Stack
#include <iostream>
#include <stack>
using namespace std;
void InsertatBottom(stack<int> s, int target)
{
    // base con
    if (s.empty())
    {
        s.push(target);
        return;
    }
    int topelement = s.top();
    s.pop();
    // rec call
    InsertatBottom(s, target);
    s.push(topelement);
}
void reverseStack(stack<int> &s)
{
    // Base Case
    if (s.empty())
    {
        return;
    }
    int target = s.top();
    s.pop();
    // Recursion
    reverseStack(s);
    // Insert at bottom
    InsertatBottom(s, target);
}
int main()
{
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    reverseStack(s);

       while (!s.empty())
    {
        cout << s.top() << "  ";
        s.pop();
    }
    cout << endl;

    return 0;

 
}