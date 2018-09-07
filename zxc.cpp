//include the library file
#include<iostream>
using namespace std;
int main(){
//the variables
int a,i,b;
//the material to be printed
cout<<"We are making a hollow square please specify the lenght required"<<endl;
//the input
cin>>i;
//first the rules then the upper and lower lines and then the spaces
for (a=1;a<=i;a++)
{
for(b=1;b<=i;b++)
{
if (a==1||a==i){
cout<<"*";}
else {
if (b==1||b==i){
cout<<"*";}
else {
cout<<" ";}

}}
cout<<endl;
}
return 0;
}

