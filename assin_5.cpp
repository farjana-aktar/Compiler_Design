#include <bits/stdc++.h>
using namespace std;

bool isOther(string str)
{
    for (int i = 0; i < str.size(); i++)
    {
        if (isdigit(str[i]) || (str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || str[i] == '.')
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

int isFloat(string str)
{
    int i = 0;

    while (i < str.size() && str[i] != '.')
    {
        if (str[i] < '0' && str[i] > '9')

            return 0;
        i++;
    }
    i++;

    int cnt = 0;
    for (; i < str.size(); i++)
    {
        if (str[i] < '0' && str[i] > '9')

            return 0;
        cnt++;
    }
    return cnt;
}

int main()
{
    string str;
    cin >> str;

    if (isOther(str))
    {
        cout << "Invalid\n";
    }

    else if ((str[0] >= 'a' && str[0] <= 'h') || (str[0] >= 'A' && str[0] <= 'Z') || (str[0] >= 'o' && str[0] <= 'z') || (str[0] >= 'O' && str[0] <= 'Z'))
    {
        cout << "Float variable\n";
    }

    else if ((isFloat(str) == 2 || isFloat(str) == 1) && (str[0] >= '0' && str[0] <= '9') || str[0] == '.')
    {
        cout << "Float Number\n";
    }

    else if (isFloat(str) > 2 && (str[0] >= '0' && str[0] <= '9') || str[0] == '.')
    {
        cout << "Double number\n";
    }

    else
    {
        cout << "Invalid\n";
    }
}