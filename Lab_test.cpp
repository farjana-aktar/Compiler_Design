#include <bits/stdc++.h>
using namespace std;

vector<string> vowels;
vector<string> consonants;
vector<string> palindromes;
map<string, pair<int, int>> wordMap;

bool isVowel(string input)
{
    string UPPER_INPUT = "";
    for (int i = 0; i < input.size(); i++)
    {
        UPPER_INPUT += toupper(input[i]);
    }
    input = UPPER_INPUT;
    
    if (input.size() > 0 && (input[0] == 'A' || input[0] == 'E' || input[0] == 'I' || input[0] == 'O' || input[0] == 'U'))
        return true;
    return false;
}
bool isConsonant(string input)
{
    string UPPER_INPUT = "";
    for (int i = 0; i < input.size(); i++)
    {
        UPPER_INPUT += toupper(input[i]);
    }
    input = UPPER_INPUT;
    
    if (input[0] >= 'A' && input[0] <= 'Z' && !isVowel(input))
        return true;
    return false;
}

bool isPalindrome(string input)
{

    string input_1 = "";
    for (int i = 0; i < input.size(); i++)
    {
        input_1 += toupper(input[i]);
    }

    string input_2 = input_1;

    reverse(input_2.begin(), input_2.end());

    if (input_1 == input_2)
        return true;
    else
        return false;
}

int main()
{
    int paragraph_line;
    paragraph_line = 100;
    paragraph_line++;

    for (int lineCount = 1; lineCount <= paragraph_line; lineCount++)
    {
        string input;
        getline(cin, input);
       
        string word;
        stringstream ss(input);
        int wordCount = 0;
        while (ss >> word)
        {
            wordCount++;
            if (isVowel(word))
            {
                cout << "Vowel: " << word << "(" << lineCount << "," << wordCount << ")" << endl;
            }
            if (isConsonant(word))
            {
                cout << "Consonant: " << word << "(" << lineCount << "," << wordCount << ")" << endl;
            }
            if (isPalindrome(word))
            {
                cout << "Palindrome: " << word << "(" << lineCount << "," << wordCount << ")" << endl;
            }
        }
    }
}