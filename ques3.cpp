//leap yr
#include<iostream>
using namespace std;

int main()
{
    int yr;
    cin >> yr;
    if ((yr % 4 == 0 && yr % 100 != 0) || (yr % 400 == 0))
        cout << "given yr is a leap yr";
    else
        cout << "given yr is a not leap yr";
    return 0;
}