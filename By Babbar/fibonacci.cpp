#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
int a=0;
int b=1;
for(int i=0; i<=n; i++){
    int nextNum= a+b;
    cout<<nextNum<<" , ";
    a=b;
    b=nextNum;
}
}