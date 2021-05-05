#include <stdio.h>
struct a
{
	int Num[20];
	}s1;
void sorting(struct a s1);
int main(){
	int i;
	printf("Enter all integers\n");
	for(i=0;i<5;i++){
		scanf("%d\n",&s1.Num[i]);
		}
		
		sorting(s1);
		}
		void sorting(struct a s1){
				int i,Temp,j;
			Temp=0;
			for(i=0;i<4;i++){
				for(j=i+1;j<5;j++){
					if(s1.Num[i]>s1.Num[j]){
					Temp=s1.Num[i];
						s1.Num[i]=s1.Num[j];
						s1.Num[j]=Temp;
						}
						}
						}
	printf("Dcending values\n");
				for(i=0;i<5;i++){
		printf("%d\n",s1.Num[i]);
					}
					}

