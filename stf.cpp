#include<stdio.h>
int main()
{
	int tot,stf,def,std;
	printf("Enter total number of users: ");
	scanf("%d",&tot);
	
	printf("Enter total staff user: ",stf);
	scanf("%d",&stf);
	def=stf/3;
	std=tot-stf-def;
	printf("The student users are: %d",std);
}
