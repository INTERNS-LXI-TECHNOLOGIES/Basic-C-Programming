//program to find net salary
#include<iostream>
using namespace std;
int main(){
string NAME;
float PF;
float DA;
float NET_SAL;
cout<<"enter your name : ";
cin>>NAME;
string DESIGNATION;
cout<<"enter your designation : ";
cin>>DESIGNATION;
float BASIC_PAY;
cout<<"enter your payment : ";
cin>>BASIC_PAY;
int HRA = 500;

if (BASIC_PAY < 10000)
{
    DA = (BASIC_PAY*60)/100;
    PF = (BASIC_PAY*15)/100;
}
else if(BASIC_PAY >= 10000){
    DA = (BASIC_PAY*75)/100;
    PF = (BASIC_PAY*20)/100;
}
else {
    cout<<"enter the data properly";
}
NET_SAL = BASIC_PAY+HRA+DA-PF;
cout<<"the Net Salary is "<<NET_SAL;
return 0;
} 
