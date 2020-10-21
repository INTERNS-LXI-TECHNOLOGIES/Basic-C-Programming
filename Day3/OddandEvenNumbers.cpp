#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the range of array : ";
    cin>>n;
    int num[n];
    int p=0,even[50];
    int q=0,odd[50];
    int i;
    cout<<"\nEnter the elements of array : ";
    for(i=0; i<n; i++){
        cin>>num[i];
    }
    for(i=0; i<n; i++){
        if(num[i]%2==0){
        even[p]=num[i];
        p++;
        }
        else{
            odd[q]=num[i];
            q++;
        }        
    }
    
    cout<<"\nThe even numbers in that array are : ";
    for(i=0; i<p; i++){
        cout<<even[i]<<" ";
    }
    cout<<"\nThe odd numbers in that array are : ";
    for(i=0; i<q; i++){
        cout<<odd[i]<<" ";
    }
}