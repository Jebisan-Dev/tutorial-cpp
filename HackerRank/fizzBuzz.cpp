#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cout << "Let's Play Fizz Buzz Game!" << endl;
    cout << "* Enter the number which is not a negative integer" << endl;
    cout << "* And also it should be not 0 and not more than 1000" << endl;
    cout << "Enter the number to play: ";
    cin >> n;

    if (0 < n < 1000)
    {
        cout << "Valid number" << endl;
        if (n % 3 == 0 || n % 5 == 0)
        {
            if (n % 3 == 0)
            {
                cout << n << " : " << "Fizz" << endl;
            }
            if (n % 5 == 0)
            {
                cout << n << " : " << "Buzz" << endl;
            }
            if (n % 3 == 0 && n % 5 == 0)
            {
                cout << n << " : " << "FizzBuzz" << endl;
            }
        }
        else
        {
            cout << n << endl;
        }
    }
    else
    {
        cout << "You entered an Invalid number : " << n << endl;
    }

    // Failed Code:

    // int n5 = n % 5 == 0;
    // int n3 = n % 3 == 0;
    // int uni = n3 && n5;

    // if (n % 3 == 0)
    // {
    //     cout << "Fizz" << endl;
    // }
    // else if (n % 5 == 0)
    // {
    //     cout << "Buzz" << endl;
    // }
    // else if (n % 3 == 0 && n % 5 == 0)
    // {
    //     cout << "FizzBuzz" << endl;
    // }
    // else
    // {
    //     cout << n << endl;
    // }
}