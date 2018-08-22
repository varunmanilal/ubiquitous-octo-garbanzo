//open the library file
#include<iostream>
using namespace std;
int main(){
//give the values required
double Fahrenheit,celsius,resultA,resultB;
//the question
cout<<"Enter the temperature in Fahrenheit"<<endl;
cin>>Fahrenheit;
resultA=Fahrenheit-32;
resultB=resultA*5;
celsius=resultB/9;
//the answer
cout<<"The temperature in celsius is="<<celsius<<endl;
return 0;
}
//done

