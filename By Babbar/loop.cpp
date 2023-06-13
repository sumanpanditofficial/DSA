#include<iostream>
using namespace std;
int main(){
int n;
int i=1;
int sum=0;
cin>>n;
while(i<=n){
    cout<<" "<<i;
    sum= sum+i;
    i=i+1;
}
cout<<endl;
cout<<"The sum of n terms is : "<<sum;
}