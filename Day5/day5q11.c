#include <stdio.h>
struct a
{
	int i;
	int Searchkey;
	int temp;
	int flag;
	int Num[20];
	}s1;
	void search (struct a s1);
	int main(){
		printf("Enter integer\n");
		for(s1.i=0;s1.i<5;s1.i++){
		scanf("%d\n",&s1.Num[s1.i]);
		
			}
				printf("Enter search key\n");
				scanf("%d\n",&s1.Searchkey);
			search(s1);
			}
			void search(struct a s1){
				s1.flag=0;
				s1.i=0;
				
			
				for(s1.i=0;s1.i<5;s1.i++){
					if(s1.Num[s1.i]==s1.Searchkey)
					{
						s1.flag=1;
					
						break;
						
					}
					}
					if(s1.flag==1)
				printf("search key found at %d\n",s1.i+1);
					else
						printf("search key not found  \n");
					}
