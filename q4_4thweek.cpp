//open the library file
#include<iostream>
using namespace std;
int main(){
//give the values required
int days,months,years,weeks,days1;
//the statement
cout<<"We need to convert the days into years months weeks days.So give the value in days"<<endl;
cin>>days;
years=days/365;
months=(days-(years*365))/30;
weeks=(days-(years*365+months*30))/7;
days1=(days-(years*365+months*30+weeks*7));
//the answer
cout<<"No of years is="<<years<<endl;
cout<<"No of months is="<<months<<endl;
cout<<"No of weeks is="<<weeks<<endl;
cout<<"No of days1 is="<<days1<<endl;
return 0;
}
              
