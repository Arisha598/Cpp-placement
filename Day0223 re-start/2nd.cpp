// Sort Stack element
#include <iostream>
#include <stack>
using namespace std;
void InsertSorted(stack<int> &s, int target)
{
    // Base case
    if (s.empty())
    {
        s.push(target);
        return;
    }
    if (s.top() >= target)
    {
        s.push(target);
        return;
    }

    int topelem = s.top();
    s.pop();
    InsertSorted(s, target);
    /// Back tarcking
    s.push(topelem);
}
void SortStack(stack<int> &s)
{
    // Base case
    if (s.empty())
    {
        return;
    }
    int topelem = s.top();
    s.pop();
    SortStack(s);
    InsertSorted(s, topelem);
}
int main()
{
    stack<int> s;
    int target = 8;
    s.push(7);
    s.push(11);
    s.push(3);
    s.push(5);
    s.push(9);

    SortStack(s);
    InsertSorted(s, target);

    while (!s.empty())
    {
        cout << s.top() << "  ";
        s.pop();
    }
    cout << endl;
}