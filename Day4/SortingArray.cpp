#include<iostream>
using namespace std;
void ascending(int arr[10]);
void descending(int arr[10]);
int main(){
    int arr[10] = {100,256,5,84,49,500,46,34,74,60};
    ascending(arr);
    descending(arr);
}
void ascending(int arr[10]){
    int i,temp;
    cout<<"\nSorted to ascending order ";
    for(i=0; i<10; i++){
        for(int j=0; j<10; j++){
            if(arr[i]<arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(i=0; i<10; i++){
        cout<<"\n "<<arr[i];
    }
}
void descending(int arr[10]){
    int temp;
    cout<<"\nSorted to descending order ";
    for(int i=0; i<10; ++i){
        for(int j=i+1; j<10; ++j){
            if(arr[i]<arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0; i<10; i++){
        cout<<"\n "<<arr[i];
    }
}
