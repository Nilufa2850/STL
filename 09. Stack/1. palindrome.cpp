#include<iostream>
#include<string>
#include<deque>
#include<stack>
using namespace std ;


int main()
{
    string obj, str;
    obj.assign("123321"); // Main string
    str = obj;

    stack<char, deque<char>> s1;
    int l = str.length();
    int i = l / 2;

    // Push the first half of the string into the stack without erasing characters
    for (int j = 0; j < i; j++)
    {
        s1.push(str[j]); // Push the first half of the string into the stack
    }

    // If the length is odd, skip the middle character
    if (str.size() % 2 != 0)
        i++;

    // Compare the second half of the string with the stack
    bool flag = true;
    for (int j = i; j < l; j++)
    {
        if (str[j] != s1.top()) // Compare with the top of the stack
        {
            flag = false;
            break;
        }
        s1.pop(); // Remove the top element if matched
    }

    // Check if it's a palindrome
    if (flag && s1.empty())
        cout << endl << "it's a palindrome";
    else
        cout << endl << "it's not";

    return 0;

}


