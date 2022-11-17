#include <bits/stdc++.h>
using namespace std;

int isArithmetic(char ch)
{
    if (ch == '+' || ch == '-' || ch == '*' || ch == '/')
        return 1;
    return 0;
}

int isCheck(string str)
{
    stack<char>st;
    int len=str.size();

    if(isArithmetic(str[len-1]))
    return 0;

    for(int i=0;i<len-1;i++)
    {
        if(isArithmetic(str[i]) && (str[i+1]== ')' || isArithmetic(str[i+1])))
        return 0;

        else if(isdigit(str[i]) && (str[i+1]=='('))
        return 0;

        else if(str[i]=='(' && (str[i+1]==')' || isArithmetic(str[i+1])))
        return 0;

        else if(str[i]==')' && (str[i+1]=='(' || isalpha(str[i+1]) || isdigit(str[i+1])))
        return 0;

        else if(str[i]=='(')
        st.push('(');

        else if(str[i]==')')
        {
            if(st.empty())
            return 0;
            st.pop();
        }
    }
    if(str[len-1]=='(') st.push('(');

    else if(str[len-1]==')')
    {
        if(st.empty())
        return 0;
        st.pop();
    }
    if(st.empty())
    return 1;
    else
    return 0;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
        if(isCheck(str))
        {
            cout << "VAlid\n";
        }
        else 
        {
            cout << "Invalid\n";
        }
    }
}