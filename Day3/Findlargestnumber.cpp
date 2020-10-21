#include<iostream>
using namespace std;
int main(){
    int n,g=0;
    cout<<"Enter the size of array : ";
    cin>>n;
    int array[n];
    cout<<"\nEnter the array elements : ";
    for(int i=0; i<n; i++){
        cin>>array[i];
        if(array[i]>g){
            g=array[i];
        }
    }
    cout<<"\n"<<g<<" is the largest";
}