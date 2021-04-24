#include <stdio.h>
struct students
{
	char *name[20];
	//int Roll_no;
	int english;
	int maths;
	int science;
}s1[];
int main(){
	int c;
	char *Search_name;
	int i;
	for(i=0;i<2;i++)
	{
	printf("\nEnter the name of student no %d\n",i+1);
		scanf("%s",&s1[i].name);
		printf("Enter the mark of student no %d in english out of 100\n",i+1);
		scanf("%d",&s1[i].english);
			printf("Enter the mark of student no %d in maths out of 100\n",i+1);
		scanf("%d",&s1[i].maths);
		printf("Enter the mark of student no %d in science out of 100\n",i+1);
		scanf("%d",&s1[i].science);
	}
	
	printf("Enter case (1 for search \t 2 for total mark \t 3 for percentage)5\n");
		scanf("%d",&c);
	switch(c)
	{
		d:
	case 1:
	printf("\n Search for a Student\n");
	printf("Enter the name of the student to search\n");
	scanf("%s",&Search_name);
		
	for(i=0;i<2;i++){
	
	if(Search_name==s1[i].name)
	
		printf("The Search Name found");
		printf("\nthe marks are\n");
		printf("english : %d\n",s1[i].english);
		printf("maths : %d\n",s1[i].maths);
		printf("science : %d\n",s1[i].science);
		

	}
	break;
	
	case 2:
	printf("\nTotal Mark of the students\n");
	for(i=0;i<2;i++){
	printf("Total Mark of  %s is %d\n",s1[i].name,s1[i].english+s1[i].maths+s1[i].science);
	}
	break;
case 3:
printf("\nPercentage  Mark of the students\n");
	for(i=0;i<2;i++){
	printf("Total percentage of  %s is %.2f\n",s1[i].name,(s1[i].english+s1[i].maths+s1[i].science)*0.333);//(total mark/300)*100
		
	}
	break;	
	
}
}