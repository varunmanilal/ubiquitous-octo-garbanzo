//include the library file
#include<iostream>
using namespace std;
int main(){
//the variables
int h,b,i;
//this will be printed
cout<<"Give the lenght of the side of right angled triangle"<<endl;
//the input
cin>>i;
//the triangle
for (b=1;b<=i;b++){
for (h=1;h<=b;h++){
	cout<<"$";
}
cout<<endl;
}
return 0;}

