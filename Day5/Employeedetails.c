#include<stdio.h>
struct employee{
    char empname[20];
    int empno;
    int salary;
    int experience;
};
void enter(struct employee[]);
void display(struct employee[]);
int incriment(struct employee[],int);
int main(){
    int empnum,extra;
    struct employee data[20];
    printf("Enter the employee details");
    enter(data);
    /*printf("\nIncriment amount for experienced employee : ");
    scanf("%d",&extra);
    incriment(data,extra);*/
    printf("\nAll employee details : ");
    display(data);

    
}
void enter(struct employee data[20]){
    for(int i=1; i<=5; i++){
        printf("\nEmployee name : ");
        scanf("%s",&data[i].empname);
        printf("\nEmployee number : ");
        scanf("%d",&data[i].empno);
        printf("\nSalary : ");
        scanf("%d",&data[i].salary);
        printf("\nExperience : ");
        scanf("%d",&data[i].experience);
    }

}
void display(struct employee data[20]){
    int inc = 1000,temp=0;
    for(int i=1; i<=5; i++){
        printf("\nNAME : %s",data[i].empname);
        printf("\nEMPLOYEE NUMBER : %d",data[i].empno);
        printf("\nSALARY : %d",data[i].salary);     
    }
    printf("\nThe person with incriment : ");
    temp = incriment(data,inc);
    for(int j=1; j<=5; j++){
        if(j==temp){
            printf("\nNAME : %s",data[temp].empname);
            printf("\nEMPLOYEE NUMBER %d",data[temp].empno);
            printf("\nSALARY %d",data[temp].salary);
        }
    }  
}
int incriment(struct employee data[20],int add){
    int temp;
    for(int i=1; i<=5; i++){
        if(data[i].experience >= 8){
            data[i].salary += add;
            temp = i;
        }
    }
    return temp;
}