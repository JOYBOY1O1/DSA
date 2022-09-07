/*
Create pattern:
12345
1234
123
12
1

*/

#include <iostream>
using namespace std;

void pattern(int n)
{
    int i, j;
    for (i = n; i >= 0; i--)
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