#include<iostream>
using namespace std;
int reverse(int);
int main(){
    int num;
    cout <<"Enter the number to be reversed : ";
    cin>>num;
    cout<<"\nThe reversed number is : "<<reverse(num);
}
int reverse(int num){
    int rev=0,temp;
    while(num>0){
        temp = num%10;
        rev = rev*10+temp;
        num = num/10;
    }
    return rev;
    
}