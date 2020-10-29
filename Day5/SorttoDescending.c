#include<stdio.h>
struct array{
    int limit;
    int arr[20];
};
void sort(struct array);
void main(){
    struct array data;
    printf("Enter the limit of array ");
    scanf("%d",&data.limit);
    printf("Enter the elements of array \n");
    for(int i=0; i<data.limit; i++){
        scanf("%d",&data.arr[i]);
    }
    sort(data);
}
void sort(struct array data){
    int temp;
    printf("\nThe sorted array is ");
    for(int i=0; i<data.limit; ++i){
        for(int j=i+1; j<data.limit; ++j){
            if(data.arr[i]<data.arr[j]){
                temp=data.arr[i];
                data.arr[i]=data.arr[j];
                data.arr[j]=temp;
            }
        }
    }
    for(int i=0; i<data.limit; i++){
        printf("\n%d",data.arr[i]);
    }

}