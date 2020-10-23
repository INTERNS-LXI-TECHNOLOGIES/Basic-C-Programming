#include<iostream>
using namespace std;
void strong(int i){
    int temp,d;
    int fact,sum;
    for(;i<1000;i++){
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
            cout<<"\nThe strong numbers are "<<i;
        }
    }
}
int main(){
    int i=100;
    strong(i);
}