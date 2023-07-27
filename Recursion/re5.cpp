#include<iostream>
using namespace std;
//sum of n numbers
void s(int i, int sum){
    if(i<1){
        cout<<sum;
        return;
    }
    s(i-1,sum+i);
}

int main(){
int n;
cin>>n;
s(n,0);
return 0;
}