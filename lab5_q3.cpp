//the library is obtained
#include<iostream>
using namespace std;
int main(){
//the variable
double a;
//the statement which is printed first
cout<<"Please give the number so that we could specify whether the number is positive,negative or zero"<<endl;
cin>>a;
if (a>0)
//results of different cases
cout<<"a is positive"<<endl;
else if (a<0)
cout<<"a is negative"<<endl;
else 
cout<<"a is zero"<<endl;
return 0;
}
