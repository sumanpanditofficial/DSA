#include <iostream>
using namespace std;
int main()
{
 char c;
 cout<<"Enter a character : "<<endl;
 cin>>c;
 if (c>=65 && c<=90){
    cout<<"It is upper case"<<endl;
 }
 else if (c>=97 && c<=122){
    cout<<"It is small case"<<endl;
 }
 else if (c>=48 && c<=57){
    cout<<"It is numeric"<<endl;
 }

}