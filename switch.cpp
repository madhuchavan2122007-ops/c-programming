#include<iostream>
using namespace std;
int main(){
int a,b,c,ch;
cout<<"enter num";
cin>>a>>b;
cout<<"1.Add 2.Sub 3.Multi 4.Div"<<endl;
cout<<"enter your choice";
cin>>ch;
switch(ch){
 case 1 : c=a+b;
        cout<<"Addition:"<<c<<endl;
        break;
 case 2 :c=a-b;
        cout<<"Subtraction:"<<c<<endl;
        break;
 case 3 :c=a*b;
        cout<<"Multiplication:"<<c<<endl;
        break;
 case 4 :c=a/b;
        cout<<"Division:"<<c<<endl;
        break;
 default :
        cout<<"Invalid choice"<<endl;      
 }
 
return 0;


}
