#include<iostream>
using namespace std;
int square(int num){
int squaNum=num*num;
return squaNum;
}
int main(){
int num;
cout<<"enter num";
cin>>num;
cout<<square(num)<<endl;

}
