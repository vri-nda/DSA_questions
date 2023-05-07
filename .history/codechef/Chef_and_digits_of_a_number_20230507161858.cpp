// Problem

// Chef has a number D containing only digits 0's and 1's. 
// He wants to make the number to have all the digits same. 
// For that, he will change exactly one digit, i.e. from 0 to 1 or from 1 to 0. If it is possible 
// to make all digits equal (either all 0's or all 1's) by flipping exactly 1 digit then output "Yes", 
// else print "No" (quotes for clarity).



#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        int count1 = 0, count0 = 0;

        // for (int i = 0; i < s.length(); i++)
        // {
        //     if (s[i] == '1')
        //     {
        //         count1++;
        //     }
        //     else
        //     {
        //         count0++;
        //     }
        // }
        count1= count(s.begin(), s.end(), '1');
        count0= count(s.begin(), s.end(), '0');

        if (count1 == 1 || count0 == 1)
        {
            cout << "Yes"<<endl;;
        }
        else
        {
            cout << "No"<<endl;;
        }
    }

    return 0;
}

