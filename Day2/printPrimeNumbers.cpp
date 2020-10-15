#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    cout<<"\nthe prime numbers are : ";
    for(int i=2; i<n ; i++){
        for(int j=2; j<=i; j++){
            if(i==j){
                cout<<"\n"<<i;
                
            }
            else if(i%j==0){
                break;
            }
        }
    }
}
    