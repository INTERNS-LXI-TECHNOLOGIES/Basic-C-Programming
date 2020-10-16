#include<iostream>
using namespace std;
int pattern1(int a){
    cout<<"\nEnter the range of pattern : ";
    cin>>a;
    for(int i=1; i<=a; ++i){
        
        for(int j=1; j<=i; ++j){
            cout<<j<<" ";            
        }
        
        cout<<endl;
    }
}
int pattern2(int b){
    
    cout<<"Enter the range of pattern : ";
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
    
    cout<<"\nEnter the range of pattern : ";
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
int pattern4(int d){
    
    cout<<"\nEnter the range of pattern : ";
    cin>>d;
    for(int i=0; d>i; d--){

        for(int j=1; j<=d; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

int pattern5(int e){
    
    int temp =0;
    cout<<"\nEnter the range of pattern : ";
    cin>>e;
    for(int i=0; e>i; e--){
        
        for(int j=1; j<=e; j++){
            cout<<j+temp<<" "; 
                      
        }
        temp++; 
        cout<<endl;
    }
}

int main(){
    int option;
    cout<<"Enter the number of the option : \n1:1st pattern \n2:2nd pattern \n3:3rd pattern \n4:4th pattern \n5:5th pattern \n";
    cin>>option;
    int a,b,c,d,e;
    if(option==1){
        pattern1(a);
    }
    else if(option==2){
        pattern2(b);
    }
    else if(option==3){
        pattern3(c);
    }
    else if(option==4){
        pattern4(d);
    }
    else if(option==5){
        pattern5(e);
    }
    return 0;
}
    
