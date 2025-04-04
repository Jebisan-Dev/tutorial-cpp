#include <bits/stdc++.h>

using namespace std;

int main()
{
    float TD;
    float D;
    float VF;
    float BF;
    float BF2 = BF * 2;

    cout << "Hey, If you want to know about your transport mode, Use ME!!" << endl;
    cout << "You have to input your Total Distance(TD), Distance to Bus stop(D), Monthly Van fare(VF) and Monthly Bus fare(BF)" << endl;
    cout << "Prefer the first option" << endl;

    cout << "Your Total Distance (TD): ";
    cin >> TD;
    cout << endl;

    cout << "Your Distance to Bus stop (D): ";
    cin >> D;
    cout << endl;

    cout << "Your Monthly Van Fare (VF): ";
    cin >> VF;
    cout << endl;

    cout << "Your Monthly Bus Fare (BF): ";
    cin >> BF;
    cout << endl;

    if (TD <= 5)
    {
        cout << "Use the Bicycle" << endl;
    }
    else
    {
        if (TD > 5 && TD <= 15 && D < 1)
        {
            cout << "Use the Bus" << endl;
        }
        else
        {
            cout << "Use the Van" << endl;

            if (TD > 15 && VF < BF2)
            {
                cout << "Use the Van" << endl;
            }
            else
            {
                cout << "Use the Bus" << endl;
            }
        }
    }
}