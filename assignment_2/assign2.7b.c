#include<stdio.h>
int  main()
{

	int year;

	printf("enter year : ");
	scanf("%d",&year);

	if(year%4==0 && year%100!=0 || year%400==0)
	{
	printf("enter year is leap year having 366 days\n");
	}

	else
	printf("enter year is not neap year having 365 days\n");


	return 0;
}
