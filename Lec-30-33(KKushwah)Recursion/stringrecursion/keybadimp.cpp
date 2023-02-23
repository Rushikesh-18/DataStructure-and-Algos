#include <bits/stdc++.h>
using namespace std;
void keypad(string p, string up, int index, string mapping[])
{
    if (index >= p.length())
    {
        cout << up << " ";
        return;
    }
    int digit = p[index] - '0'; // Converts char '2' to int 2.
    string value = mapping[digit];
    for (int i = 0; i < value.length(); i++)
    {
        up.push_back(value[i]);
        keypad(p, up, index + 1, mapping);
        up.pop_back();
    }
}
int main()
{
    vector<string> ans;

    string p = "23";
    string up = "";
    int index = 0;
    string mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    keypad(p, up, index, mapping);
}