// grading student
#include<iostream>
using namespace std;
int main()
{
    int n, i;
    cin >> n;
    int a[n];
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (i = 0; i < n; i++) 
    {
        if (a[i] >= 38) 
        {
            int x = a[i] / 5;
            x = (x + 1) * 5;
            if (x - a[i] < 3)
                a[i] = x;
        }
    }
    for (i = 0; i < n; i++)
    {
        cout << a[i] << "\n";
    }
    return 0;
}