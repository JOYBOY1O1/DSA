#include<iostream>
using namespace std;
//print linearly from 1 to N
void p(int i,int n){
    if(i>n)return;
    cout<<i;
    p(i+1,n);
}


void f(int i, int n){
    if(i<1)return;
    f(i-1,n); //using backtracking
    cout<<i;
}

int main(){
int n;
cin>>n;
p(1,n);
cout<<endl;
f(n,n);

return 0;
}