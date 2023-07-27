#include<iostream>
using namespace std;
//print linearly from N to 1

void p(int i,int n){
    if(i<1)return;
    cout<<i;
    p(i-1,n);
}

void f(int i, int n){
    if(i>n)return;
    f(i+1,n); //using backtracking
    cout<<i;
}

int main(){
int n;
cin>>n;
p(n,n);
cout<<endl;
f(1,n);

return 0;
}