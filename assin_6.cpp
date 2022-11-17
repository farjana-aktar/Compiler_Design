#include<bits/stdc++.h>
using namespace std;

bool isChar(char ch)
{
    if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    return true;
    return false;
}

bool isOther(string str)
{
    for(int i=0;i<str.size();i++)
    {
        if(isdigit(str[i]) || isChar(str[i]) || str[i] == '_')
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

    string sub = str.substr(0,3);

    if(isOther(str))
    {
        cout << "Invalid\n";
    }

    else if(sub == "ch_" && (isChar(str[3]) || isdigit(str[3])))
    {
        cout << "Float varialbe\n";
    }

    else if(sub == "bn_" && (isChar(str[3]) || isdigit(str[3])))
    {
        cout << "Binary variable\n";
    }

    else if(str[0] == '0' && (str[1] == '0' || str[1] == '1'))
    {
        cout << "Binary number\n";
    }

    else 
    {
        cout << "Invalid\n";
    }
}
