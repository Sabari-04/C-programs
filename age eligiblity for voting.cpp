#include<stdio.h>
main()
{
	int age;
	printf("Enter age: ");
	scanf("%d",&age);
	if(age>=18)
	printf("you are eligible to vote");
	else
	printf("not eligible");
	printf("%d,years to wait;",18-age);
}
