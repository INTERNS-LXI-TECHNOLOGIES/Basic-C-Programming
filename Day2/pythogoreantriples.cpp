#include<iostream>
using namespace std;
int main(){
    int limit;
    cout<<"Enter the limit ";
    cin>>limit;
    int a,b,c=0;
    int m = 2;
    while(c<limit){
        for(int n=1; n<m; n++){
            a=m*m-n*n;
            b=2*m*n;
            c=m*m+n*n;
            if(c>limit){
                break;
            }
            cout<<"\n"<<a<<" "<<b<<" "<<c;
        }
        m++;
    }
}