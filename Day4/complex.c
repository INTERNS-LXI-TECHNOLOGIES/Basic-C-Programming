#include<stdio.h>
struct cmplx
{
	float r,i;
}n1,n2;
void add(struct cmplx p,struct cmplx q)
{
	printf("Added Result = %fi+%f",p.i+q.i,p.r+q.r);
}

void mul(struct cmplx p,struct cmplx q)
{
	float ac,ad,bc,bd;
	ac=p.r*q.r;
	ad=p.r*q.i;
	bc=p.i*q.r;
	bd=p.i*q.i;
	printf("\nmultiplied Result = (%fi)+(%f)",ad+bc,ac-bd);
}
main()
{
	printf("Enter the first complex number");
	scanf("%fi+%f",&n1.i,&n1.r);
	printf("Enter the Second complex number");
	scanf("%fi+%f",&n2.i,&n2.r);
//	printf("%fi+%f",n1.i,n1.r);
	add(n1,n2);
	mul(n1,n2);
}
