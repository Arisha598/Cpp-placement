// Insert at bootom in aan stack
#include <iostream>
#include <stack>
using namespace std;
void solve(stack<int> &s, int target)
{
    // Base condition
    if (s.empty())
    {
        s.push(target);
        return;
    }
    int topElement = s.top();
    s.pop();
    // recc call
    solve(s, target);
    // BAck Tracking
    s.push(topElement);
}
void InsertatBottom(stack<int> &s)
{
    if (s.empty())
    {
        cout << "Underflow" << endl;
    }
    else
    {
        int target = s.top();
        s.pop();
        solve(s, target);
    }
}
int main()
{
    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    InsertatBottom(s);

    while (!s.empty())
    {
        cout << s.top() << "  ";
        s.pop();
    }
    cout << endl;
}