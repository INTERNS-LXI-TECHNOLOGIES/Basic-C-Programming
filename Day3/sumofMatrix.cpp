#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    int sum=0;
    cout<<"Enter the range of matrix : ";
    cin>>n;
    int arr[n][n];
    cout<<"\nEnter the elements of matrix : \n";
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    cout<<"\nThe matrix is : \n";
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            sum = sum+arr[i][j];
        }
    }
    cout<<"\nThe sum of the matrix is : "<<sum;
    
}