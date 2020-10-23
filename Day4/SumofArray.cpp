#include<iostream>
using namespace std;
int sum(int limit,int arr[]);
int main(){
    int limit;
    cout<<"Enter the limit of the array : ";
    cin>>limit;
    int arr[limit];
    cout<<"\nEnter the elements of the array : \n";
    for(int i=0; i<limit; i++){
        cin>>arr[i];
    }

    cout<<"\nThe sum of the elements of array is : "<<sum(limit,arr);
    
}
int sum(int limit,int arr[]){
    int sum = 0;
    for(int i=0; i<limit; i++){
        sum = sum+arr[i];
    }
    return sum;
}