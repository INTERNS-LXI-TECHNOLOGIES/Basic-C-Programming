#include<iostream>
using namespace std;
int main(){
    int x = 0; 
    do{
        int value;
        cout<<"Enter the value : ";
        cin>>value;
        int i=1;
        int count=0;
        for (;i<value;i++){
            if (value%i==0){
                count++;
            }
        }

        if (count==1){
            cout <<"prime";
        }
        else
        cout <<"not prime";           
        
        cout<<"\nDo you want to continue press 1 to continue 0 to exit ";
        cin>>x;
    }while(x==1);
}

