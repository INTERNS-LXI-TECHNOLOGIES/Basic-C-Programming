#include<iostream>
using namespace std;
int main(){
    int num , count =0;
    cout<<"Enter the number to be checked : ";
    cin>>num;
    for(int i=1; i<=num; i++){
        if(num%i==0){
            count++;
        }
        
    }
    if(count==2){
        cout<<"\n"<<num<<" Is a prime number";

    }
    else{
        cout<<"\n"<<num<<" Is not a prime";
    }
}