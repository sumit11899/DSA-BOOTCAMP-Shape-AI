//  Left Rotation
#include<iostream>
using namespace std;
int main() 
{
    int n, d, i;
    cin >> n >> d;
    int a[n];
    for (i = 0; i < n; i++) 
    {
        cin >> a[i];
    }
    for (i = d; i < n; i++)
    {
        cout << a[i] << " ";
    }
    for (i = 0; i < d; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}