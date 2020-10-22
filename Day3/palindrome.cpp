#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char str[20];
    int rev=0;
    cout<<"Enter a word : ";
    cin>>str;
    int len = strlen(str);
    for(int i=0; i<len; i++){
        if((str[i]!=str[(len-1)-i])){
            rev=1;
        }
        
    }
    if(rev==0){
        cout<<"\nEntered word "<<str<<" is a palindrome ";
    }
    else{
        cout<<"\nEntered word "<<str<<" is not a palindrome ";
    }
}