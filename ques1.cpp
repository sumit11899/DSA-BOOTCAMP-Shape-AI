//swap numbers
#include<iostream>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    cout << "x before swap= " << x << endl;
    cout << "y before swap= " << y << endl;
    int  temp = x;
    x = y;
    y = temp;
    cout << "x after swap= " << x << endl;
    cout << "y after swap= " << y << endl;
    return 0;
}