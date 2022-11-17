#include<bits/stdc++.h>
using namespace std;

int is_char(char ch)
{
    if(ch >= 'A' && ch <= 'Z') return 1;
    if(ch >= 'a' && ch <= 'z') return 1;
    return 0;
}

int is_digit(char ch)
{
    if(ch >= '0' && ch <= '9') return 1;
    return 0;
}

void count(string str)
{
    int words = 1;
    int digits = 0;
    int letters = 0;
    int others = 0;

    for(int i=0;i<str.size();i++)
    {
        if(str[i] == ' ' && (is_char(str[i+1]) || is_digit(str[i+1]))) words++;
        if(is_char(str[i])) letters++;
        if(is_digit(str[i])) digits++;
        if(!is_char(str[i]) && !is_digit(str[i])) others++;
    }

    cout << "numbers of words = " << words << endl;
    cout << "numbers of letters = " << letters << endl;
    cout << "numbers of digits = " << digits << endl;
    cout << "numbers of other characters = " << others << endl;
}

void seperate(string str)
{
    char sep_letter[100], sep_digit[100], sep_other[100];
    int mark_letter = 0, mark_digit = 0, mark_other = 0;

    for(int i=0;i<str.size();i++)
    {
        if(is_char(str[i]))
        {
            sep_letter[mark_letter++] = str[i];
        }

        if(is_digit(str[i]))
        {
            sep_digit[mark_digit++] = str[i];
        }

        if(!is_char(str[i]) && !is_digit(str[i]))
        {
            sep_other[mark_other++] = str[i];
        }
    }

    cout << "All characters: " << sep_letter << " " << endl;
    cout << "All digit: " << sep_digit << endl;
    cout << "All others: " << sep_other << endl;
}

int main()
{
    string str = "Md. Tareq Zaman, Part-3,2022";
    cout << (str) << endl;
    count(str);
    seperate(str);
}