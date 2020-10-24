#include<iostream>
using namespace std;
int amstrong(int num){
    int digits,ams = 0,temp,boo;
    temp = num;
    while(temp!=0){    
        digits = temp%10;
        ams = ams+(digits*digits*digits);
        temp = temp/10;
    }
    if(ams==num){
        boo=1;
    }
    else{
        boo=0;
    }
    
    return boo;
}
int main(){
    int num;
    cout<<"Enter the value to be checked : ";
    cin>>num;
    if(amstrong(num)==1){
        cout<<"\nThe number is an amstrong";
    }
    else{
        cout<<"\nThe number is not an amstrong";
    }
}