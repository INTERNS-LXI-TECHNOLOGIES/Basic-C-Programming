#include<iostream>
using namespace std;
int main(){
    int n,s,count=0,r;
    cout<<"Enter the range of the array : ";
    cin>>n;
    int arr[n];
    int i;
    cout<<"\nEnter the elements of the array : ";
    for(i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"\nEnter the value to found from the array : ";
    cin>>s;
    for(i=0; i<n; i++){
        if(arr[i]==arr[i]){
            if(arr[i]==s){
                count+=1;
            }
            r++;
        }
        else{
            r=0;
        }
    }
    if(r==0){
        cout<<"\nThe element is not present in the array ";
    }
    else{
        cout<<"\nThe element is present "<<count<<" times in the array";
    }
}