#include<iostream>
#include<math.h>
using namespace std;
int series1(int n){
    cout<<"\nEnter the range : ";
    cin>>n;
    float sum=0;
    float fact = 1;
    for(int i=1; i<=n; i++){
        fact = fact*i;        
        sum = sum + (i/fact);        
    }
    cout<<sum;
}
int series2(int x,int n){
    cout<<"Enter the range : ";
    cin>>n;
    cout<<"\nEnter the value of x : ";
    cin>>x;
    float fact1 = 1;
    float sum = 1;
    for (int j=1; j<=n; j++){
        fact1 = fact1*j;
        sum = sum + (pow(x,j)/fact1);
    }
    cout<<sum;
}
int series3(int x, int n){
    float fact2;
    cout<<"Enter the range : ";
    cin>>n;
    cout<<"\nEnter value of x : ";
    cin>>x;
    float sum = x,val=1,y=2,mul;
    for(int i=1; i<n; i++){
        fact2=1;
        for(int j=1; j<=y; j++){
            fact2=fact2*j;
        }
        val = val*(-1);
        mul = val*pow(x,y)/fact2;
        sum = sum+mul;
        y+=2;
    }
    cout<<sum; 

}
int main(){
    int a;
    int n,x;
    cout<<"Enter the option : \n1.Series1 \n2.Series2 \n3.Series3 \n";
    cin>>a;
    if(a==1){
        
        
        series1(n);
    }
    else if(a==2){

        series2(x,n);
    }
    else if(a==3){
        series3(x,n);
    }
    
}