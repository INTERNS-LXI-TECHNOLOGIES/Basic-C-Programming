#include<iostream>
#include<cmath>
#include<complex>
using namespace std;
int main(){
    float a,b,c;
    float equ;
    cout<<"Enter the values of a , b , c : ";
    cin>>a>>b>>c;
    if(a==0){
        cout<<"\nEnter the correct value ";
    }
    else {
        equ = b*b-4*a*c;
               
        if(equ > 0){
            cout<<"\n The equation is real ";
            cout<<"\n"<<(-b + sqrt(std::complex<float> (equ)))/(2*a);
            cout<<"\n"<<(-b - sqrt(std::complex<float> (equ)))/(2*a);
        }
        else if(equ==0){
            cout<<"\nEquation is real and same root ";
            cout<<"\n"<<-b/(2*a);
        }
        else{
            cout<<"\nEquation is complex ";
            cout<<"\n"<<-b/(2*a)<<"+i "<<sqrt(std::complex<float> (equ));
            cout<<"\n"<<-b/(2*a)<<"-i "<<sqrt(std::complex<float> (equ));
        }

    }
}
