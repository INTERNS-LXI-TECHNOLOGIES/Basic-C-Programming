#include<iostream>
using namespace std;
int main(){
    int n;
    int no;
    int sum = 0;
    cout<<"Enter the value of n : ";
    cin>>n;
    for(int i=0;i<n;i++){
        no = i*i;
        sum = sum+no;
        
    }
    cout<<"\n"<<sum<<" Is the square of n numbers ";
}