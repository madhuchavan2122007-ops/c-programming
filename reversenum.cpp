#include<iostream>
using namespace std;
 int main(){
 int num,revNum=0;
 cout<<"enter number"<<endl;
 cin>>num;
while(num>0){
int dig=num%10;
num/=10;
revNum=revNum*10+dig;

}
 cout<<"RevNum:"<<revNum;
 }
