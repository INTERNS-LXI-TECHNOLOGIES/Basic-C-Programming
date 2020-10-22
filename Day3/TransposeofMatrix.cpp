#include<iostream>
using namespace std;
int main(){
    int r,c,i,j;
    cout<<"Enter the range of row and column : ";
    cin>>r>>c;
    int arr[r][c];
    int transpose[r][c];
    cout<<"\nEnter the elements of matrix : \n";
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            cin>>arr[i][j];
        }
    }
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            cout<<"\n"<<arr[i][j];
        }
    }
    cout<<"\nThe transpose of the array is : \n";
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            transpose[i][j]=arr[j][i];
            cout<<transpose[i][j];
        }
    }
}