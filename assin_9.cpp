#include <bits/stdc++.h>
using namespace std;

vector<string> words;
vector<string> p = {"he", "she", "I", "we", "you", "they"};
vector<string> n = {"book", "cow", "dog", "home", "grass", "rice", "mango"};
vector<string> v = {"read", "eat", "take", "run", "write"};
vector<string> pn = {"Sagor", "Selim", "Salma", "Nipu"};

bool chech_pn(string str)
{
    for (int i = 0; i < pn.size(); i++)
    {
        if (pn[i] == str)
        {
            return true;
        }
    }
    return false;
}

bool check_p(string str)
{
    for (int i = 0; i < p.size(); i++)
    {
        if (p[i] == str)
        {
            return true;
        }
    }
    return false;
}

bool check_n(string str)
{
    for (int i = 0; i < n.size(); i++)
    {
        if (n[i] == str)
        {
            return true;
        }
    }
    return false;
}

bool check_v(string str)
{
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == str)
        {
            return true;
        }
    }
    return false;
}

void slitword(string str)
{
    string word = "";
    for (auto x : str)
    {
        if (x == ' ')
        {
            words.push_back(word);
            word = "";
        }
        else
        {
            word = word + x;
        }
    }
    if (words.size() > 0)
    {
        words.push_back(word);
    }
}

int main()
{
    string str;
    getline(cin, str);
    slitword(str);

    if (words.size() < 2 || words.size() > 3)
    {
        cout << "Invalid\n";
    }
    else
    {
        bool ok = false;
        if (chech_pn(words[0]) || check_p(words[0]))
        {
            if (words.size() == 2)
            {
                if (check_v(words[1]))
                {
                    ok = true;
                }
                else
                {
                    ok = false;
                }
            }
            else if (words.size() == 3)
            {
                if (check_v(words[1]) && check_n(words[2]))
                {
                    ok = true;
                }
                else
                {
                    ok = false;
                }
            }
        }
        if (ok)
        {
            cout << "Valid\n";
        }
        else
        {
            cout << "Invalid\n";
        }
    }
}