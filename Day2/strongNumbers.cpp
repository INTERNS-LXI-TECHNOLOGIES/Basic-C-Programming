#include<iostream>
using namespace std;
int main(){
    int start = 100, last = 1000;
    int temp=0,fact=1;
    for(int i=start; i<=last; i++){
        while(i>0){
            temp = i%10;
            if(temp>0){
                for(int j=1; j<temp; j++){
                    fact = fact*j;
                }
            }
            i = i/10;
        }
        if(fact==i){
            cout<<"\n"<<i;
        }
    }
}