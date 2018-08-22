//open the library file
#include<iostream>
using namespace std;
int main()
{
//give the values 
double Chem,Phy,Bio,Math,CS,result,result1,result2;
//type the statements
cout<<"type the marks of each subject in the order of Chem,Phy,Bio,Math,CS"<<endl;
cin>>Chem;
cin>>Phy;
cin>>Bio;
cin>>Math;
cin>>CS;
result=Chem+Phy+Bio+Math+CS;
result1=result/5;
result2=result/5;
//the answer is given
cout<<"The total marks is="<<result<<endl;
cout<<"the average is ="<<result1<<endl;
cout<<"the percentage is ="<<result2<<endl;
return 0;
}

