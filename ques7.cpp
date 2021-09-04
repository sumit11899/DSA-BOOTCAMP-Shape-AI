// second largest element of array
#include<iostream>
using namespace std;
int main() 
{
    int n, i;
    cin >> n;
    int a[n];
    int first_max = -9999, second_max = -9999;
    for (i = 0; i < n; i++) 
    {
        cin >> a[i];
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] > first_max) 
        {
            second_max = first_max;
            first_max = a[i];
        }
        else if (a[i] > second_max && a[i] != first_max)
        {
            second_max = a[i];
        }
    }
    cout << "the second largest element of array is= " << second_max;
    return 0;
}