#include<stdio.h>
#include<string.h>
int main()
{
	char str1[30],str2[30];
	printf("Enter your username: ");
	scanf("%s",str1);
	printf("Reenter your username: ");
	scanf("%s",str2);
	if((strcmp(str1,str2)==0))
	{
		printf("Valid");
	}
	else
	{
		printf("Invalid");
	}
	return 0;
}
