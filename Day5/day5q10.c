#include <stdio.h>
struct a
{
	int Num[20];
	int i;
	int j;
	int Temp;
}s1;
void sorting(struct a s1);
int main(){
	printf("Enter all integers\n");
	for(s1.i=0;s1.i<5;s1.i++){
		scanf("%d\n",&s1.Num[s1.i]);
		}
		
		sorting(s1);
		}
		void sorting(struct a s1){
			s1.Temp=0;
			for(s1.i=0;s1.i<4;s1.i++){
				for(s1.j=s1.i+1;s1.j<5;s1.j++){
					if(s1.Num[s1.i]>s1.Num[s1.j]){
					s1.Temp=s1.Num[s1.i];
						s1.Num[s1.i]=s1.Num[s1.j];
						s1.Num[s1.j]=s1.Temp;
						}
						}
						}
	printf("Dcending values\n");
				for(s1.i=0;s1.i<5;s1.i++){
		printf("%d\n",s1.Num[s1.i]);
					}
					}
