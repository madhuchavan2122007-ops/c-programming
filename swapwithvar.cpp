#include<iostream>
using namespace std;
int main()
{
int a=2,b=5,c;
cout<<"original val:"<<endl;
cout<<"a="<<a<<endl;
cout<<"b="<<b<<endl;
c=b;
b=a;
a=c;
cout<<"swap val:"<<endl;
cout<<"a="<<a<<endl;
cout<<"b="<<b<<endl;

}

