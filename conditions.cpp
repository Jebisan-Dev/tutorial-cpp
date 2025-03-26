#include <bits/stdc++.h>

using namespace std;

int main()
{
    int marks;
    cout << "Hey, tell me your marks and you can know your grade here!" << endl;
    cin >> marks;

    if (marks <= 34)
    {
        cout << "You are weak" << endl;
    }
    else if (marks <= 49)
    {
        cout << "You are just pass" << endl;
    }
    else if (marks <= 64)
    {
        cout << "You have a C pass" << endl;
    }
    else if (marks <= 74)
    {
        cout << "You have a B pass" << endl;
    }
    else if (marks <= 100)
    {
        cout << "You have an A pass" << endl;
    }
    else
    {
        cout << "You have given me an invalid marks" << endl;
    }
}