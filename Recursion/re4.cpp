#include<iostream>
using namespace std;
//print linearly from N to 1

void p(int i,int n){
    if(i<1)return;
    cout<<i<<endl;
    p(i-1,n);
}

int main(){
int n;
cin>>n;
p(n,n);
return 0;
}