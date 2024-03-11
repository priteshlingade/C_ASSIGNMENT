#include<stdio.h>
int main()
{
	int num,flag=0;

	printf("enter number :");
	scanf("%d",&num);

	for(int i=2;i<num;i++)
	{
		if(num%i==0)
		{
			flag=1;
		}
	}

	if(flag==1)
	{

	printf("\nnot prime number\n");
	}
	else
	{
	printf("\nprime number\n");
	}


return 0;
}
