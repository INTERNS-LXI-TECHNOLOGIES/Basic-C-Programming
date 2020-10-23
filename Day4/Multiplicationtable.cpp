#include <iostream>
using namespace std;
void multiplication();
int main(){
    multiplication();
}
void multiplication(){
    int a,mul;
    cout<<"Enter which mulitiplication has to be printed : ";
    cin>>a;
    for(int i=1; i<=10; i++){
        mul = a*i;
        cout<<"\n"<<a<<" * "<<i<<" = "<<mul;
    }
}