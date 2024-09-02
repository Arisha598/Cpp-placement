// Stack
// valid parenthesis
#include <iostream>
#include <stack>
using namespace std;
bool validPalindrome(stack<char> st, string s ){
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        if (ch == '[' || ch == '{' || ch == '(')
        {
            st.push(ch);
        }
        else
        {
            // closing
            if (!st.empty())
            {
                char topelem = st.top();
                if (ch == ']' && topelem == '[')
                {
                    st.pop();
                }
                else if (ch == '}' && topelem == '{')
                {
                    st.pop();
                }
                else if (ch == ')' && topelem == '(')
                {
                    st.pop();
                }
                else{
                   return false;
                }
            }
        }
    }
    if(st.empty()){
         return true;
    }
    else{
         return false;
    }

}
int main()
{
    stack<char> st;
    string s = "()";
    validPalindrome(st,s);
    
    
}