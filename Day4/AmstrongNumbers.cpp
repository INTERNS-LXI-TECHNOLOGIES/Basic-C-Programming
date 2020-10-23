#include<iostream>
using namespace std;
int amstrong(int num){
    int digits,ams = 0,temp;
    temp = num;
    while(temp!=0){    
        digits = temp%10;
        ams = ams+(digits*digits*digits);
        temp = temp/10;
    }
    return ams;
}
int main(){
    int num;
    cout<<"Enter the value to be checked : ";
    cin>>num;
    if(amstrong(num)==num){
        cout<<"\n"<<num<<" Is an amstrong number";
    }
    else{
        cout<<"\n"<<num<<" Is not an amstrong number";
    }
}