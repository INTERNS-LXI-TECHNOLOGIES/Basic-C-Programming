#include<iostream>
using namespace std;
int prime(int value){
    int count=0;
    for (int i=1;i<value;i++){
        if (value%i==0){
            count++;
        }
    }
    return count;  
}
int main(){
    int value;
    cout<<"Enter the value : ";
    cin>>value;
    if (prime(value)==1){
        cout <<"prime";
    }
    else
    cout <<"not prime";
}