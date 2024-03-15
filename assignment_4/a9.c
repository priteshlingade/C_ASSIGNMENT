#include<stdio.h>
void prime(int num);
void range(int num);
int main()
{

int num;

printf("enter nunmber: ");
scanf("%d",&num);

prime(num);
printf("\n\n");
range(num);
return 0;
}

//-----------------------------------------------
void prime(int num)
{
	int flag=0;
	
	for(int i=2;i<num;i++)
	{
		if(num%i==0 )
		flag=1;
	}

	if(flag==1)
	printf("not prime\n");

	else
	printf("prime\n");

return;
}

//--------------------------------------------------

void range(int num)
{
	
	

	int flag=0,j;
	
	for(int i=2;i<num;i++)
	{
	
		for(j=2;j<i;j++)
		{

			if(i%j==0)
			flag=1;

		}
	
		if(flag==0 || (i==2 && flag==1))
		printf("%d ",i);

		flag=0;

	}
printf("\n");
return ;
}
