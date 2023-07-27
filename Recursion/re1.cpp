#include<iostream>
using namespace std;

int count=0;

void f(){
    if(count==10) return;
    cout<<count<<endl;
    count++;
    f();
}
//base condition
int main(){

    f();
    return 0;
}