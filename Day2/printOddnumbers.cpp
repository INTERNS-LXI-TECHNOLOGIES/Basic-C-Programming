#include<iostream>
using namespace std;
int usingfor(){
    int endValue = 200;
    int startValue = 6;
    int output;
    for(;endValue>startValue; endValue--){
        if(endValue%2==1){
            output =  endValue;
            cout<<"\n"<<output;
        }
        

    }
    return output;
}
int usingwhile(){
    int enVal = 200;
    int StrVal = 6;
    int out;
    while(enVal>StrVal){
        if(enVal%2==1){
            out = enVal;
            cout<<"\n"<<out;
        }
        enVal--;
    }
    return out;
}
int main(){
    int option;
    cout<<"Enter the way using which method to find the Natuaral number \n1:using For \n2:using While \n";
    cin>>option;
    if(option==1){
        usingfor();
    }
    else if(option==2){
        usingwhile();
    }
}
