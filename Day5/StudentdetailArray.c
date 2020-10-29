#include<stdio.h>
struct student{
    int reg_num;
    char name[25];
    int m1,m2,m3;
    
};
void enter(int,struct student[]);
void failed(int,struct student[]);
void main(){
    int n;
    printf("Enter the total number of students : ");
    scanf("%d",&n);
    struct student data[n];
    printf("\nEnter the details of the students : ");
    enter(n,data);
    printf("\nThe failed students : ");
    failed(n,data);

}
void enter(int n,struct student data[n]){
    
    for(int i=1; i<=n; i++){
        printf("\nName : ");
        scanf("%s",&data[i].name);
        printf("\nRegester Number : ");
        scanf("%d",&data[i].reg_num);
        printf("\nMarks of the subjects : ");
        scanf("%d %d %d",&data[i].m1,&data[i].m2,&data[i].m3);
        
    } 
}
void failed(int n,struct student data[n]){
    for(int i=1; i<=n; i++){
        if((data[i].m1 < 40 && data[i].m2 < 40) || (data[i].m2 < 40 && data[i].m3 < 40) || (data[i].m3 < 40 && data[i].m1 < 40)){
            printf("\nName %s \nRegister number %d \nMarks %d\t%d\t%d",data[i].name,data[i].reg_num,data[i].m1,data[i].m2,data[i].m3);
        }
    }
}
