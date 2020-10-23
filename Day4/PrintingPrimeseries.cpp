#include<iostream>
using namespace std;
void prime(int i){
    for(i=10; i<100; i++){
        for(int j=2; j<=100; j++){
            if(i==j){                
                cout<<"\n"<<i;
            }
            else if(i%j==0){
                break;
            }
        }
    }
}
int main(){
    int i=10;
    prime(i);
}
