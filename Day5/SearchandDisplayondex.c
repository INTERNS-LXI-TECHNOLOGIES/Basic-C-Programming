#include<stdio.h>
struct array{
    int limit;
    int arr[20];
};
void search(struct array,int);
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
    search(data,s);
}
void search(struct array data,int srch){
    int temp = -1;

    for(int i=0; i<data.limit; i++){
        for(int j=i+1; j<data.limit; j++){
            if(srch==data.arr[i]){
                printf("\nThe element is present in %d position ",i+1);
                temp=1;
                break;
            }
            
        }
    }
    if(temp<0){
        printf("\nThers no such element");
    }
    
}