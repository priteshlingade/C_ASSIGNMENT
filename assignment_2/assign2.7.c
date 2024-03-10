#include<stdio.h>
int main()
{
	int year;

	printf("enter year ");
	scanf("%d",&year);

	if(year %400 ==0)
	{

		if(year % 100 !=0)
		printf("enter number is leap year having 366 days\n");
		
		else 
		printf("enter year is non leap year having 365 days\n");

	}
	
	else if(year%4==0)
	{
		printf("enter year is leap year having 366 days\n");
	}

	else 
	{
		printf("enter number is non leap year having 365 days\n");
	}
		
	





return 0;
}
