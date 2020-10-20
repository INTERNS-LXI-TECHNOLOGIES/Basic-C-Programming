#include<iostream>
using namespace std;
int main(){
    int principle_Amount = 1000000;
    float rate = 12.5; 
    int time = 10;   
    float Si,Ci;
    float power = 1;
    float base = 1+(rate/100)/100;
    Si = (principle_Amount*rate/100*time)/100;
    cout<<"\nThe simple intrest for 10 year is : "<<Si;
    for(int t=1; t<=time; t++){
        power = base*power;
        
    }
    Ci = principle_Amount*power;
    cout<<"\nThe compound interest for 10 years is : "<<Ci;
}