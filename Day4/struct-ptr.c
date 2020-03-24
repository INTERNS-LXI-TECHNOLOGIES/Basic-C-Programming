#include <stdio.h>
struct stud
{

	char name[10];
	int m;

   
};

main()
{
    struct stud *p, p1;
    p = &p1;   

    printf("Enter Name : ");
    scanf("%s", &p->name);

    printf("Enter Mark: ");
    scanf("%d", &p->m);

    printf("Displaying:\n");
    printf("Name: %s\n", p1.name);
    printf("Mark : %d", p1.m);

    
}
