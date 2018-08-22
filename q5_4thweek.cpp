//open the library file
#include<iostream>
using namespace std;
int main(){
//give the values required
double angle1,angle2,angle3;
//the statement
cout<<"Give the first two angles"<<endl;
cin>>angle1;
cin>>angle2;
angle3=180-(angle1+angle2);
//the answer
cout<<"The 3rd angle is="<<angle3<<endl;
return 0;
} 
