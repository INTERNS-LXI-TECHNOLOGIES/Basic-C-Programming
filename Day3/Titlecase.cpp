#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char str[50];
    cout<<"Enter the string to be converted : ";
    cin.getline(str,50);
    str[0]=toupper(str[0]);
    for(int i=1; str[i]!='\0'; i++){
        if(str[i]==' '){
            str[i+1]=toupper(str[i+1]);
        }
        
    }
    cout<<"\nThe converted string is : "<<str;
}