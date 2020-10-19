#include <iostream>
using namespace std;
int main(){
    int num,sum = 0;
    cout<<"Enter the number to be checked : ";
    cin>>num;
    for(int i=1; i<num; i++){
        if(num%i==0){
            sum+=i;
        }
    }
    if(sum==num){
        cout<<"\n "<<num<<" Is a perfect number";
    }
    else{
        cout<<"\n "<<num<<" Is not a perfect number";
    }
}