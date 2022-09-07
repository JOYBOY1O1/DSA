/*
Create pattern:
*****
****
***
**
*

*/

#include <iostream>
using namespace std;

void pattern(int n)
{
    int i, j;
    for (i = 0; i <= n; i++)
    {
        for (j = i; j < n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    pattern(n);

    return 0;
}