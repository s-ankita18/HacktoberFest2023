#include <bits/stdc++.h>
using namespace std;

void balance_parentheses();

int main()
{
    int t;
    cout << "Enter number of test cases:";
    cin >> t;

    for (int i = 0; i < t; i++) {
        balance_parentheses();
    }
    return 0;
}

void balance_parentheses()
{
    stack<char> a;
    string s;
    cout << "Enter string may or may not containing parentheses:";
    cin >> s;
    int flag = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '{' || s[i] == '[' || s[i] == '(') {
            a.push(s[i]);
            flag = 1;
        }
        if (!a.empty()) {
            if (s[i] == '}') {
                if (a.top() == '{')
                // top of the stack
                {
                    a.pop();
                    //to delete terms from the top of array
                    continue;
                }
                else
                    break;
            }
            if (s[i] == ']') {
                if (a.top() == '[') {
                    a.pop();
                    continue;
                }
                else
                    break;
            }
            if (s[i] == ')') {
                if (a.top() == '(') {
                    a.pop();
                    continue;
                }
                else
                    break;
            }
        }
        else {
            break;
        }
    }

    if ((a.empty()) && (flag == 1))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
