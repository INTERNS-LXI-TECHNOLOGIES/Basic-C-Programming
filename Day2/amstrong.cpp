#include<iostream>
using namespace std;
int main(){
    int num,digits,ams = 0,temp;
    cout<<"Enter the value to be checked : ";
    cin>>num;
    temp = num;
    while(temp!=0){
        
        digits = temp%10;
        ams = ams+(digits*digits*digits);
        temp = temp/10;
    }
    if(ams==num){
        cout<<"\n"<<num<<" Is an amstrong number";
    }
    else{
        cout<<"\n"<<num<<" Is not an amstrong number";
    }
}