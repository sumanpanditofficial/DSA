#include<iostream>
using namespace std;
int main(){
int n;
int i=2;
cin>>n;
while(i<n){
if (n%i==0){
    cout<<"It is not prime"<<endl;
    break;
}
else {
    cout<<"It is  prime"<<endl;
}
i=i+1;
}
}