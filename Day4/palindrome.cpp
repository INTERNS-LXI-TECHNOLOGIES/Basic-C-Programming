#include<iostream>
using namespace std;
int palindrome(int num){
    int temp , rev=0;
    for(int i=num;i>0;){
        temp=i%10;
        rev=rev*10+temp;
        i=i/10;
    }
    return rev;
}
int main(){
    int num;
    cout<<"Enter a palindrome number : ";
    cin>>num;
    if(palindrome(num)==num){
        cout<<"\n"<<num<<" is a palindrome";
    }
    else{
        cout<<"\n"<<num<<" not a palindrome";
    }
}
