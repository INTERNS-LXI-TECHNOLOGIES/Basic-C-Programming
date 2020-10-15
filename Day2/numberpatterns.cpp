#include<iostream>
using namespace std;
int pattern1(int a){
    cout<<"\nEnter the range of a : ";
    cin>>a;
    for(int i=1; i<=a; ++i){
        
        for(int j=1; j<=i; ++j){
            cout<<j<<" ";            
        }
        
        cout<<endl;
    }
}
int pattern2(int b){
    
    cout<<"Enter the range of b : ";
    cin>>b;
    int x=1;
    for(int i=0; i<b; i++){
        for(int j=0; j<=i; j++){
            cout<<x<<" ";
            x++;        
        }
        cout<<endl;
    }
}
int pattern3(int c){
    
    cout<<"\nEnter the range of c : ";
    cin>>c;
    int x=1;
    for(int i=0; i<c; i++){
        
        for(int j=0; j<=i; j++){
            cout<<x<<" ";            
        }
        x=x+1;
        cout<<endl;
    }
}
int main(){
    int option;
    cout<<"Enter the number of the option : \n1:1st pattern \n2:2nd pattern \n3:3rd pattern \n";
    cin>>option;
    int a,b,c;
    if(option==1){
        pattern1(a);
    }
    else if(option==2){
        pattern2(b);
    }
    else if(option==3){
        pattern3(c);
    }
    return 0;
}
    
