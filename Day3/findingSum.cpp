#include<iostream>
using namespace std;
int main(){
    int sum=0;
    int num[10];
    cout<<"Enter the elements of array : ";
    for(int i=0; i<10; i++){
        cin>>num[i];
        sum=sum+num[i];
    }
    cout<<"\nThe sum of the array is : "<<sum;
}