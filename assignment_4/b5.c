#include<stdio.h>

void bin(int num);


int main()
{

	int num;

	printf("enter number :");
	scanf("%d",&num);
	printf("\nbinary= ");
	bin(num);
	printf("\n");


return 0;
}


void bin(int num)
{
	if(num<=0)
	{
	return;
	}

	else
	{
		bin(num/2);
		printf("%d",num%2);
	}


return;
}
