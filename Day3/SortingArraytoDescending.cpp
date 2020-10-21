#include<iostream>
using namespace std;
int main(){
    int n,i,temp;
    
    cout<<"Enter the range of array : ";
    cin>>n;
    int arr[n];
    cout<<"\nEnter the elements of the array : \n";
    for(i=0; i<n; i++){
        cin>>arr[i];   
    }
    cout<<"\nThe sorted array is ";
    for(i=0; i<n; ++i){
        for(int j=i+1; j<n; ++j){
            if(arr[i]<arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(i=0; i<n; i++){
        cout<<"\n "<<arr[i];
    }
}
