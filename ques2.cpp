#include<iostream>
using namespace std;
int main()
{
    int one, two, numThree, large;
    cout << "Enter the Three Numbers: ";
    cin >> one >> two >> numThree;
    if (one > two)
    {
        if (two > numThree)
            large = one;
        else
        {
            if (numThree > one)
                large = numThree;
            else
                large = one;
        }
    }
    else
    {
        if (two > numThree)
            large = two;
        else
            large = numThree;
    }
    cout << "\nlargest Number = " << large;
    cout << endl;
    return 0;
}