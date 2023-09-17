#include <iostream>
using namespace std;

int helper(string str, int start, int end)
{
    if (start >= end)
    {
        return 1;
    }
    else if (str[start] != str[end])
    {
        cout << "Not Palindrome" << endl;
        return 0;
    }
    else
    {
        return helper(str, start + 1, end - 1);
    }
}

int main()
{
    string str;
    cout << "Enter the string: ";
    cin >> str;

    int output = helper(str, 0, str.length() - 1);

    if (output == 1)
    {
        cout << "Given string is Palindrome" << endl;
    }

    return 0;
}
