#include <bits/stdc++.h>

using namespace std;

int main()
{
    int num1, num2, num3, high;

    cout << "1st number: ";
    cin >> num1;
    cout << "2nd number: ";
    cin >> num2;
    cout << "3rd number: ";
    cin >> num3;

    if (high == num1 > num2 && num1 > num2)
    {
        cout << num1 << " is the highest number" << endl;
    }
    else if (high == num2 > num1 && num2 > num3)
    {
        cout << num2 << " is the highest number" << endl;
    }
    else
    {
        cout << num3 << " is the highest number" << endl;
    }
}