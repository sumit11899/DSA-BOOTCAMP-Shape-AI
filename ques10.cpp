// camel case
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    int i, counter = 1;
    for (i = 1; s[i] != '\0'; i++) 
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            counter++;
    }
    cout << counter;
    return 0;
}