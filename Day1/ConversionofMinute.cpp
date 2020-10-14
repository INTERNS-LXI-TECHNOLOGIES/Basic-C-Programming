#include<iostream>
using namespace std;
int main(){
    float min;
    cout<<"Enter the minute to be converted : ";
    cin>>min;
    int option;
    cout<<"\nEnter the option of convertion : \n1.Seconds \n2.Hours \n3.Minute \n";
    cin>>option;
    switch(option){
        case 1:
        cout<<"\n"<<min*60<<" Seconds";
        break;
        case 2:
        cout<<"\n"<<min*0.0166667<<" Hours";
        break;
        case 3:
        cout<<"\n"<<min*1<<" Minutes";
        break;
        default:
        cout<<"\nTime";
    }
}