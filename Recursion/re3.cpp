#include<iostream>
using namespace std;
//print linearly from 1 to N
void p(int i,int n){
    if(i>n)return;
    cout<<i;
    p(i+1,n);
}

int main(){
int n;
cin>>n;
p(1,n);

return 0;
}