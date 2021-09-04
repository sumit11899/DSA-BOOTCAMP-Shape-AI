#include <iostream>
using namespace std;
{
    int k = 2 * n - 2;
    for (int i = 0; i < n; i++)
    {
        // Inner loop to handle number spaces
        // values changing acc. to requirement
        for (int j = 0; j < k; j++)
            cout << " ";
        // Decrementing k after each loop
        k = k - 1;
        // Inner loop to handle number of columns
        // values changing acc. to outer loop
        for (int j = 0; j <= i; j++)
        {
            // Printing stars
            cout << "* ";
        }
        // Ending line after each row
        cout << endl;
    }
}
// Driver Code
int main()
{
    int n = 5;
    // Function Call
    triangle(n);
    return 0;
}