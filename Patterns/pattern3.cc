/*
Create pattern:
1
12
123
1234
12345
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
            cout << j;
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