/*
Create pattern:
1
22
333
4444
55555
*/

#include <iostream>
using namespace std;

void pattern(int n)
{
    int i, j;
    for (i = 0; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << i;
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