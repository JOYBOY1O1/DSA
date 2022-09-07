/*
Create pattern:
*****
*****
*****
*****
*/

#include <iostream>
using namespace std;

void pattern(int n)
{
    int i, j;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cin>>n;
    pattern(n);

    return 0;
}