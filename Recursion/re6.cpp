#include<iostream>
using namespace std;
//factorial
int f(int n){
    if(n==0)return 1;
    return n*f(n-1);
}

int main(){
int n;
cin>>n;
cout<<endl;
cout<<f(n);
return 0;
}