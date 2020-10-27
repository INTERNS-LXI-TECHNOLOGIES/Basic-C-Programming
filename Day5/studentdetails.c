#include<stdio.h>

struct students{
    char name[10];
    int roll_no;
    int marks[10];    
};
void search_by_rollnum(int,struct students []);
void total_by_rollnum(int,struct students []);
void percentage_by_rollnum(int,struct students []);
int main(){
    struct students s[15];
    printf("Enter the details of 5 students ");
    for(int i=1; i<=5; i++){
        printf("\nEnter the name of the student : %d ",i);
        scanf("%s",&s[i].name);
        printf("\nEnter the roll number : ");
        scanf("%d",&s[i].roll_no);
        printf("\nEnter the marks of 5 subjects : ");
        for(int j=1; j<=5; j++){
            scanf("%d",&s[i].marks[j]);
        }
    }
    int option,roll_num;
    printf("\nEnter the method you need to proceed with \n1.Search for student \n2.Find the total mark of a student \n3.Find total percentage of a student \n4.Display every student detail ");
    scanf("%d",&option);
    if(option==1){
        printf("\nEnter the roll number : ");
        scanf("%d",&roll_num);
        search_by_rollnum(roll_num,s);
    }
    else if(option==2){
        printf("\nEnter the roll num : ");
        scanf("%d",&roll_num);
        total_by_rollnum(roll_num,s);
    }
    else if(option==3){
        printf("\nEnter the roll num : ");
        scanf("%d",&roll_num);
        percentage_by_rollnum(roll_num,s);
    }
    else if(option==4){
        for(int i=1; i<=5; i++){
            printf("\nName of the Student : %s",s[i].name);
            printf("\nRoll number is : %d",s[i].roll_no);
            for(int j=1; j<=5; j++){
                printf("\nThe marks is : \n%d",s[i].marks[j]);
            }
        }
    }

}
void search_by_rollnum(int roll_num,struct students d[5]){
    int temp = 0;
    int index=0;
    for(int i=1; i<=5; i++){
        if(d[i].roll_no==roll_num){
            index = i;
            temp = 1;
        }
    }
    if(index!=0){
        printf("\nName is %s",d[index].name);
        printf("\nRoll number is %d",d[index].roll_no);
        for(int j=1; j<=5; j++){
            printf("\nMarks  %d",d[index].marks[j]);
        }
    }
    if(temp==0){
        printf("\nThere is no student with that roll number in this list ");
    }
}
void total_by_rollnum(int roll_num,struct students d[5]){
    int total =0;
    int temp = 0;
    for(int i=1; i<=5; i++){
        if(roll_num==d[i].roll_no){
            for(int j=1; j<=5; j++){
                total = total+d[i].marks[j];
            }
            temp = 1;            
        }
    }
    if(temp==1){
        printf("\nThe total marks of the student is %d",total);
    }
    else {
        printf("\nThere is no student with the entered roll num ");
    }
}
void percentage_by_rollnum(int roll_num,struct students d[5]){
    float percentage,total=0;
    int temp=0;
    for(int i=1; i<=5; i++){
        if(roll_num==d[i].roll_no){
            for(int j = 1; j<=5; j++){
                total = total+d[i].marks[j];
            }
            percentage = (total/500)*100;
            temp = 1;
        }
    }
    if(temp==1){
        printf("\nThe total percentage of the student is : %f",percentage);
    }
    else{
        printf("\nThere is no student with the entered roll num ");
    }
}

