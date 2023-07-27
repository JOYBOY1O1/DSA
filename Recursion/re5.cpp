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

int f(int n){
    if(n==0)return 0;
    return n+ f(n-1);
}

int main(){
int n;
cin>>n;
s(n,0);
cout<<endl;
cout<<f(n);
return 0;
}