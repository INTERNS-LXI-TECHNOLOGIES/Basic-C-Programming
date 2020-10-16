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
    for(int i=0; i<temp; i++){
        if(val1%i==0 && val2%i==0){
            

            
        }
    }
    cout<<"\n"<<lcm;
}