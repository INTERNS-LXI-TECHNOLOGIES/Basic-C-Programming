#include<iostream>
using namespace std;
int main(){
    int i,temp,d;
    int fact,sum;
    for(i=100;i<1000;i++){
        
        temp = i;
        sum=0;
        while(temp>0){
            d=temp%10;
            
            fact=1;
            for(int j=1;j<=d;j++){
                fact=fact*j;
                
            }
            sum=sum+fact;
            
            temp=temp/10;
        }
        
        if(sum==i){
            cout<<"\n numbers are "<<i;
        }


    }
}