#include<bits/stdc++.h>
using namespace std;

bool isAllDigit(string str)
{
    for(int i=0;i<str.size();i++)
    {
        if(isdigit(str[i]))
        {
            continue;
        }
        else
        {
            return false;
        }
    }
    return true;
}

bool isOther(string str)
{
    for(int i=0;i<str.size();i++)
    {
        if(isdigit(str[i]) || (str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            continue;
        }
        else
        {
            return true;
        }
    }
    return false;
}

int main()
{
    string str;
    cin >> str;

    if(isOther(str))
    {
        cout << "Undefined\n";
    }

    else if((str[0] >= 'i' && str[0] <= 'n') || (str[0] >= 'I' && str[0] <= 'N'))
    {
        cout << "Integer\n";
    }

    else if(isAllDigit(str) && str[0] == '1' && str.size() <= 4)
    {
        cout << "ShortInt\n";
    }

    else if(isAllDigit(str) && str.size() > 4)
    {
        cout << "LongInt\n";
    }

    else
    {
        cout << "Invalid\n";
    }
}
