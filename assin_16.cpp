#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int sz = 4e5+4;

int pre_char(char ch)
{
    if(ch == '^') return 3;
    else if(ch == '/' || ch == '*') return 2;
    else if(ch == '+' || ch == '-') return 1;
    else return -1;
}

void infix_to_postfix(string s)
{
    stack<char>st;
    string str;
    
    for(int i=0;i<s.size();i++)
    {
        if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || isdigit(s[i]))
        {
            str += s[i];
        }
        else if(s[i] == '(')
        {
            st.push('(');
        }
        else if (s[i] == ')')
        {
            while (st.top() != '(')
            {
                str += st.top();
                st.pop();
            }
            st.pop();
        }
        else
        {
            while (!st.empty() && pre_char(s[i]) <= pre_char(st.top()))
            {
                str += st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }
    while (!st.empty())
    {
        str += st.top();
        st.pop();
    }
    cout << str << endl;
}

void solve()
{
    string s;
    cin >> s;
    infix_to_postfix(s);
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}