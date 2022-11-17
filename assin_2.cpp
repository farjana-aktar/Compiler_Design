#include <bits/stdc++.h>
using namespace std;

set<char> vowels, consonents;

bool is_char(char ch)
{
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
        return true;
    return false;
}

bool vowel(char ch)
{
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        return true;
    return false;
}

void consonent(string str)
{
    int vowels = 0, consonents = 0;

    for (int i = 0; i < str.size(); i++)
    {
        if (vowel(str[i]))
            vowels++;

        if (is_char(str[i]) && !vowel(str[i]))
            consonents++;
    }

    cout << "Vowels are : " << vowels << endl;
    cout << "Consonents are : " << consonents << endl;
}

void find(string str)
{
    for (int i = 0; i < str.size(); i++)
    {
        if (vowel(str[i]))
        {
            vowels.insert(str[i]);
        }

        if (is_char(str[i]) && vowel(str[i]))
        {
            consonents.insert(str[i]);
        }
    }
    cout << "Vowels: ";
    for (char ch : vowels)
        cout << ch << " ";
    cout << endl;
    cout << "Consonants: ";
    for (char ch : consonents)
        cout << ch << " ";
    cout << endl;
}

int main()
{
    string str = "Munmun is the student of Computer Science & Engineering";
    cout << str << endl;
    consonent(str);
    find(str);
}