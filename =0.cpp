#include<stdio.h>
int main()
{
	int num=0,sumn=0,sump=0,n=0,p=0;
	int sum,sumn_avg,sump_avg;
	scanf("%d",&sum);
	while(num!=-1);
	{
		if(num<0)
		{
			sumn=sumn+num;
			n=n+1;
		}
		else
		{
			sump=sump+num;
			p=p+1;
		}
		scanf("%d",&num);
	}
	sumn_avg=sumn/n;
	sump_avg=sump/p;
	printf("sumn_avg=sump_avg");
}
