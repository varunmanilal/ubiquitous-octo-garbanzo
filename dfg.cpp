//include the library file
#include<iostream>
using namespace std;
int main(){
//the variables
int a,i,b;
//the material to be printed
cout<<"We are making a square please specify the lenght required"<<endl;
//the input
cin>>i;
//The result
for(a=0;a<i;a++){
for(b=0;b<i;b++){
cout<<"*";
}
cout<<endl;
}return 0;
}
