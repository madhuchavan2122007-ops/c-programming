#include<iostream>
using namespace std;
float area_circum(int r){
float area=3.14*r*r;
float circum=2*3.14*r;
cout<<"area of circle:"<<area<<endl;
cout<<"circumference of circle:"<<circum<<endl;
return 0;
}
int main(){
int r;
cout<<"enter radius:";
cin>>r;
area_circum(r);



}
