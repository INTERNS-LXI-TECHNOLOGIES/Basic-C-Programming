#include<stdio.h>
struct array{
    int limit;
    int arr[20];
};
int search(struct array,int);
void main(){
    int s,index;
    struct array data;
    printf("Enter the limit of the array : ");
    scanf("%d",&data.limit);
    printf("\nEnter the elements of the array ");
    for(int i=0; i<data.limit; i++){
        scanf("%d",&data.arr[i]);
    }
    printf("\nEnter the search : ");
    scanf("%d",&s);
    index = search(data,s)+1;
    printf("\nThe element %d is precent in %d position ",s,index);
}
int search(struct array data,int srch){
    int temp;
    for(int i=0; i<data.limit; i++){
        if(srch==data.arr[i]){
            temp=i;
        }
    }
    return temp;
}