#include<iostream>
using namespace std;
int main(){
    int startValue,endValue;
    cout<<"\nEnter the starting point and ending point : ";
    cin>>startValue>>endValue;
    cout<<"\nThe prime numbers are : ";
    for(int i=startValue; i<endValue; i++){
        for(int j=2; j<=endValue; j++){
            if(i==j){
                
                cout<<"\n"<<i;
            }
            else if(i%j==0){
                break;
            }
        }
    }
}