
#include<iostream>
using namespace std;
int perfect(int num){
    int sum = 0;
    for(int i=1; i<num; i++){
        if(num%i==0){
            sum+=i;
        }
    }
    return sum;
}
int main(){
    int num;
    cout<<"Enter the number to be checked : ";
    cin>>num;
    if(perfect(num)==num){
        cout<<"\n "<<num<<" Is a perfect number";
    }
    else{
        cout<<"\n "<<num<<" Is not a perfect number";
    }
}