// prime number
#include<iostream>
using namespace std;

int main()
{
    int n, i;
    cin >> n;
    for (i = 2; i < n; i++) 
    {
        if (n % i == 0)
        {
            cout << "given number is not a prime number ";
            break;
        }
    }
    if (i == n) 
    {
        cout << "given number is a prime number ";
    }
    return 0;
}