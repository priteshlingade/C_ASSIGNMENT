#include<stdio.h>
void leap(int year);
void days(int month);

static  int flag=0;

int main()
{
int year,month;

	printf("enter year\n");
	scanf("%d",&year);

	printf("\nenter month");
	scanf("%d",&month);

	leap(year);
	
	days(month);


return 0;
}

void leap(int year)
{
	if((year%400==0 && year%100!=0)||year%4==0)
	{
		printf("leap year\n");
		flag=1;
	}
	else
	{
		printf("not leap\n");
		flag=0;
	}
return;
}


void days(int month)
{
	if(flag==1)
	{
		switch(month)
		{
			case 1 : printf("days=31");
					break;
			case 2 : printf("days=29");
					break;
			case 3 : printf("days=31");
					break;
			case 4 : printf("days=30");
					break;
			case 5 : printf("days=31");
					break;
			case 6 : printf("days=30");
					break;
			case 7 : printf("days=31");
					break;
			case 8 : printf("days=31");
					break;
			case 9 : printf("days=30");
					break;
			case 10 :printf("days=31");
					break;
			case 11: printf("days=30");
					break;
			case 12: printf("days=31");
					break;
		}

	}

	else
	{
		switch(month)
		{
			case 1 : printf("days=31");
					break;
			case 2 : printf("days=28");
					break;
			case 3 : printf("days=31");
					break;
			case 4 : printf("days=30");
					break;
			case 5 : printf("days=31");
					break;
			case 6 : printf("days=30");
					break;
			case 7 : printf("days=31");
					break;
			case 8 : printf("days=31");
					break;
			case 9 : printf("days=30");
					break;
			case 10 :printf("days=31");
					break;
			case 11: printf("days=30");
					break;
			case 12: printf("days=31");
					break;

		}
	}


return;
}
