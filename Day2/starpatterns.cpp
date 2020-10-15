#include<iostream>
using namespace std;
int pattern1(int a){
    
    cout<<"Enter the range of a : ";
    cin>>a;
    
    for(int i=0; i<a; i++){
        for(int j=0; j<=i; j++){
            cout<<"* ";        
        }
        cout<<endl;
    }
}
int pattern2(int b){
    cout<<"Enter the range of b : ";
    cin>>b;
    for(int i=0; b>i; b-- ){
        for(int j=0; j<b; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

int pattern3(int c){
    
    cout<<"Enter the range of c : ";
    cin>>c;
    int k = c;
    for(int i=1; i<=c; i++){
        for(int j=0; j<=c; j++){
            if(j>=k){
                cout<<"* ";
            }
            else{
                cout<<" ";
            }
            
        }k--;
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
     

