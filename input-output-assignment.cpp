#include <bits/stdc++.h>

using namespace std;

int main()
{
    int num1, num2;
    cin >> num1 >> num2;
    int sum = num1 + num2;
    int product = num1 * num2;
    int difference = num1 - num2;
    int quotient = num1 / num2;
    int mod = num1 % num2;
    cout << "The sum of the two numbers is : " << sum << endl;
    cout << "The product of the two number is : " << product << endl;
    cout << "The difference of the two numbers is : " << difference << endl;
    cout << "The quotient of the two number is : " << quotient << endl;
    cout << "The MOD of the two number is : " << mod << endl;
}