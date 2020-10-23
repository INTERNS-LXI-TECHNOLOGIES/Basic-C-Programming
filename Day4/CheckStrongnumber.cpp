#include<iostream>
using namespace std;
int strong(int num){
    int temp,d;
    int fact;
    int sum=0;
    temp = num;
    while(temp>0){
        d=temp%10;
        fact=1;
        for(int j=1;j<=d;j++){
            fact=fact*j;
        }
        sum=sum+fact;   
        temp=temp/10;
    }
    return sum;       
}
int main(){
    int num;
    cout<<"Enter the number : ";
    cin>>num;
    if(strong(num)==num){
        cout<<"\nThe number is a strong number ";
    }
    else {
        cout<<"\nNot a strong number ";
    }
}