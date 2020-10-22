#include<iostream>
using namespace std;
int main(){
    int r,c,i,j,sumr1=0,sumr2=0,sumd=0;
    cout<<"Enter the limits of row and colomn : ";
    cin>>r>>c;
    int arr[r][c];
    cout<<"\nEnter the elements of the matrix : ";
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            cin>>arr[i][j];
        }
    }
    
    cout<<"\nThe sum of 1st row elements is : ";
    for(i=0; i<1; i++){
        for(j=0; j<c; j++){
            sumr1 = sumr1+arr[i][j];
        }
        cout<<sumr1;
    }
    
    cout<<"\nThe sum of the elements diagonally is : ";
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            if(i==j){
                sumd = sumd+arr[i][j];
            }
        }
    }
    cout<<sumd;
    cout<<"\nThe sum of last row elements is : ";
    for(j=c-1; j<c; j++){
        for(i=0; i<r; i++){
            sumr2 = sumr2+arr[j][i];
        }    
    }
    cout<<sumr2;
}