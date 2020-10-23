#include<iostream>
using namespace std;
void sum();
int main(){
    sum();
}
void sum(){
    int a,temp,sum=0;
    cout<<"Enter the a value : ";
    cin>>a;
    while(a>0){
        temp = a%10;
        sum = sum+temp;
        a=a/10;
    }
    cout<<"\n The sum of the digits is : "<<sum;    
}