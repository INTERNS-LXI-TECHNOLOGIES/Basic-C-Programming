#include<iostream>
using namespace std;
int main(){
    int a,b,c,d;
    cout<<"Enter 4 numbers : \n";
    cin>>a>>b>>c>>d;
    int largest;
    largest = (a>b && a>c && a>d) ? a:((b>c && b>d) ? b:(c>d ? c:d)); 
    cout<<largest<<" Is the largest";
    return 0;
  
    
}
