//include the library file
#include<iostream>
using namespace std;
int main(){
//the variables
int h,b,i;
//what will be printed
cout<<"Give the lenght of the side of right angled triangle"<<endl;
//the input
cin>>i;
//make the triangle
for (h=1;h<=i;h++){
for (b=i;b>=h;b--){
	cout<<"@";
}
cout<<endl;}}

