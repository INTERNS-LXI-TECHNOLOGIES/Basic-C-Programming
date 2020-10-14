#include<iostream>
using namespace std;
int main(){
    int no;
    cout<<"Enter a number from 0 to 6 : ";
    cin>>no;
    switch(no){
        case 0:
        cout<<"Sunday";
        break;
        case 1:
        cout<<"Monday";
        break;
        case 2:
        cout<<"Tuesday";
        break;
        case 3:
        cout<<"wednesday";
        break;
        case 4:
        cout<<"Thursday";
        break;
        case 5:
        cout<<"Friday";
        break;
        case 6:
        cout<<"Saturday";
        break;
        default:
        cout<<"\n Enter the correct number ";
    }
}