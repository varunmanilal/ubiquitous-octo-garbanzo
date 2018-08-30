//the library file is obtained
#include<iostream>
using namespace std;
int main(){
//the variables required are given
int a;
int b;
int c;
//The instruction which is to be printed
cout<<"Provide the three numbers"<<endl;
cin>>a;
cin>>b;
cin>>c;
if (a>b && a>c)
//The results of each case
cout<<"a is greater than b and c"<<endl;
else if (b>c && b>a)
cout<<"b is greater than a and c"<<endl;
else
cout<<"c is greater than b and c"<<endl;
return 0;
}


