#include<iostream>
using namespace std;
int main(){
    int val1,val2;
    cout<<"Enter two values : ";
    cin>>val1>>val2;
    int temp=0,lcm;
    if(val2>val1){
        temp = val2;
    }
    else{
        temp = val1;
    }
    while(1){
        if(temp%val1==0 && temp%val2==0){
            lcm=temp;
            break;
            
        }
        else{
            temp++;
        }
        
    }
    cout<<"\n"<<lcm;
}
