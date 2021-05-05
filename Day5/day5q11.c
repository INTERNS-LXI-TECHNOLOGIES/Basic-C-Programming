#include <stdio.h>
struct a
{
int Num[20];
	}s1;
	void search (struct a s1,int);
	int main(){
		int i;
		int Searchkey;
		printf("Enter integer\n");
		for(i=0;i<5;i++){
		scanf("%d\n",&s1.Num[i]);
		
			}
				printf("Enter search key\n");
				scanf("%d\n",&Searchkey);
			search(s1,Searchkey);
			}
			void search(struct a s1,int Searchkey){
			int flag;
			int i;
			for(i=0;i<5;i++){
					if(s1.Num[i]==Searchkey)
					{
						flag=1;
					break;
							}
					}
					if(flag==1)
				printf("search key found at %d\n",i+1);
					else
						printf("search key not found  \n");
					}
				

