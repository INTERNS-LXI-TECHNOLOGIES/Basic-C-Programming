#include<iostream>
using namespace std;
int main(){
    int num, sum=0,first=0, second=1;
    cout<<"Enter the length of the series : ";
    cin>>num;
    cout<<"\nThe fibanocii series : ";
    for(int i=0; i<num; i++){
        if(i<=1){
            sum=i;
            
        }
        
        else{
            sum = first + second;
            first = second;
            second = sum;
            
        }
        cout<<sum;
        
    }
}