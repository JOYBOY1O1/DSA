/*
Create pattern:
*********
 *******
  *****
   ***
    *
*/

#include <iostream>
using namespace std;

void pattern(int n)
{
    cout << endl;
    int i, j;
    for (i = n - 1; i >= 0; i--)
    {
        for (int k = 0; k <= n - i - 1; k++)
        {
            cout << " ";
        }
        for (j = 0; j < 2 * i + 1; j++)
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