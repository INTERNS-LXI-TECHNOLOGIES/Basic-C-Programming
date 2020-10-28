#include<stdio.h>
void gcd(int,int);
int main(){
    int num1,num2;
    printf("Enter the two number : ");
    scanf("%d %d",&num1,&num2);
    gcd(num1,num2);
}
void gcd(int n1, int n2){
    int output;
    for(int i=1; i<n1 && i<n2; i++){
        if(n1%i==0 && n2%i==0){
            output = i;
        }
    }
    printf("\n%d  is the gcd",output);
}