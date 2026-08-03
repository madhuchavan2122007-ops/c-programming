#include<iostream>
using namespace std;
void swap(int a,int b){
a=a+b;
b=a-b;
a=a-b;
cout<<"swap val:"<<endl;
cout<<"a="<<a<<endl;
cout<<"b="<<b<<endl;
}
int main(){
int a=10,b=5;
swap(a,b);
return 0;

}
