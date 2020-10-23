#include<iostream>
using namespace std;
float circle(float r,float area,float pi){
    area = pi*r*r;
    return area;
}
int main(){
    float pi=3.14;
    float r,area;
    cout<<"Enter the radius of the circle : ";
    cin>>r;
    cout<<"\nThe area is : "<<circle(r,area,pi);

}