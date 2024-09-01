// Stack Implementation
#include <iostream>
using namespace std;
class Stack
{
public:
    int *arr;
    int size;
    int top;
    Stack(int size)
    {
        arr = new int[size];
        this->size = size;
        top = -1;
    }
    void Push(int data)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = data;
        }
        else
        {
            cout << "Overflow" << endl;
        }
    }
    void Pop()
    {
        if (top == -1)
        {
            cout << "Ubdeflow" << endl;
        }
        else
        {
            top--;
        }
    }
    int getSize()
    {
        return top + 1;
    }
    int getTop()
    {
        if (top == -1)
        {
            cout << "Underflow" << endl;
        }
        else
        {
            return arr[top];
        }
    }
    int isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
int main()
{
    Stack s(10);
    s.Push(10);
    s.Push(20);
    s.Push(30);

    while (!s.isEmpty())
    {

        cout << s.getTop() << " ";
        s.Pop();
    }
    cout << endl;

    cout << "The size is  " << s.getSize() << endl;
    cout << "The Stack is  " << s.isEmpty() << endl;
}