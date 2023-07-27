#include <iostream>
using namespace std;
//print name N no of times
void pr(int i, int n)
{
    if (i > n)
        return;
    cout << "joy" << endl;
    pr(i + 1, n);
}

int main()
{
    int n;
    cin >> n;
    pr(1, n);
}