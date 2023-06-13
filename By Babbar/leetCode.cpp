#include<iostream>
using namespace std;
int main(){
    int sum=0;
    int pro=1;
int n;
cin>>n;
while(n!=0){
    int digit= n%4;
    sum=sum+digit;
    pro= pro*digit;
    n=n/10;
}
cout<<"Sum and product are :"<< sum <<" and "<< pro<<endl;
cout <<"Difference is :"<<pro-sum<<endl; 
}