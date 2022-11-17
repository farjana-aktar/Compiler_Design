#include <bits/stdc++.h>
using namespace std;

string Keywords[49] = {"int", "namespace", "struct", "new", "switch", "and", "delete", "do", "not", "this",
                        "double", "auto", "nullptr", "throw", "else", "true", "enum", "or", "try", "bool", "typedef",
                        "break", "private", "case", "typename", "catch", "false", "public", "union", "char", "float",
                        "register", "unsigned", "for", "return", "class", "goto", "short", "void", "if", "signed", "const",
                        "sizeof", "int", "static", "while", "long", "xor", "continue"};

bool isChar(char ch)
{
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        return true;
    return false;
}

bool isKeyword(string str)
{
    for (int i = 0; i < 49; i++)
    {
        if (Keywords[i] == str)
            return true;
    }
    return false;
}

bool isIdentifire(string str)
{
    if (isdigit(str[0]))
        return true;
    else
        return false;
}

bool isOperator(string str)
{
    if (str == "+" || str == "-", str == "*" || str == "/" || str == "<" || str == ">" || str == "%" || str == "!" || str == "&&" || str == "||")
        return true;
    return false;
}

bool isOther(string str)
{
    for(int i=0;i<str.size();i++)
    {
        if(isdigit(str[i]) || isChar(str[i]) || str[i] == '_' || str[i] == '.')
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
        cout << "Constant\n";
    }

    else if(isKeyword(str))
    {
        cout << "Keyword\n";
    }

    else if(isIdentifire(str))
    {
        cout << "Identifier\n";
    }

    else if(isOperator(str))
    {
        cout << "Operator\n";
    }

    else
    {
        cout << "Constant\n";
    }
}