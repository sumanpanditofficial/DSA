#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
for (int i=2; i<n; i++){
    if (n%i==0){
        cout<<"Its not a prime number";
        break;
    }
    else{
        cout<<"It's a prime number";
        break;
    }
}
}