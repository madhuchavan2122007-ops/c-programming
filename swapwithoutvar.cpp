#include<iostream>
using namespace std;
 int main(){
 int a,b;
 cout<<"enter numbers";
 cin>>a>>b;
 cout<<"original val:"<<endl;
 cout<<"a="<<a<<endl;
 cout<<"b="<<b<<endl;
 a=a+b;
 b=a-b;
 a=a-b;
 cout<<"swap val:"<<endl;
 cout<<"a="<<a<<endl;
 cout<<"b="<<b<<endl;
 }
