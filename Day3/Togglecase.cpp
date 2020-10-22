#include<iostream>

using namespace std;
int main(){
    char str[50];
    cout<<"Enter a word to be converted : ";
    cin.getline(str,50);
    for(int i=0; str[i]!='\0'; i++){
        if(islower(str[i])){
            str[i]=toupper(str[i]);
        }
        else{
            str[i]=tolower(str[i]);
        }
    
    }
    cout<<"\n The converted string is : "<<str;
}