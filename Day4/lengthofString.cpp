#include<iostream>
#include<cstring>
using namespace std;
int length(char str[20]){
    int len = strlen(str);
    return len;
}
int main(){
    char str[20];
    cout<<"Enter the string : ";
    cin.getline(str,20);
    cout<<"\nThe length of string is : "<<length(str);
}