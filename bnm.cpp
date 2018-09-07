//open the library file
#include<iostream>
using namespace std;
int main(){
//the variables are__
int h,b,i;
//what is to be printed
cout<<"Give the lenght of the side of the triangle"<<endl;
//the input
cin>>i;
//first make the top star and after that the down one
for (b=1;b<i;b++){
for (h=1;h<=b;h++){
	cout<<"@";
}
cout<<endl;
}
for (h=1;h<=i;h++){
for (b=i;b>=h;b--){
	cout<<"@";
}
cout<<endl;
}
return 0;}

