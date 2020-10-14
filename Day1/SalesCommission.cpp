#include<iostream>
using namespace std;
int main(){
    int sales;
    cout<<"Enter the sales of the month : ";
    cin>>sales;
    float commition;
    if(sales<10000){
        commition = 0;
        cout<<"\nNo commition";
    }
    else if(sales>=10000 && sales<=30000){
        commition = (sales*15)/100;
        cout<<"Yor commition is : "<<commition;
    }
    else if(sales >= 30000){
        commition = ((sales*25)/100)+1000;
        cout<<"\nyour Commition is : "<<commition;
    }
    else {
        cout<<"No commition";
    }
}