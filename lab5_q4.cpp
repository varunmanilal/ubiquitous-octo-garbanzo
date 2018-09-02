//include the library file
#include<iostream>
using namespace std;
int main(){
//the varaiables are a and b
int b;
//The info printed
cout<<"type the no to check whether its divisible by 5 or 11"<<endl;
cin>>b;
//the instruction and the result
if (b%5==0){
cout<<"Its divisible by 5"<<endl;}
else if (b%11==0){
cout<<"Its divisible by 11"<<endl;}
else 
{cout<<"Its neither divisible by 5 nor by 11"<<endl;
}
return 0;
}
