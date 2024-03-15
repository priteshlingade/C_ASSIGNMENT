#include<stdio.h>
int power(int bs, int pr);

int main()
{

int base,pow,result;

printf("enter base : ");
scanf("%d",&base);

printf("\nenter power :");
scanf("%d",&pow);

result = power(base,pow);
printf("%d to the power %d = %d",base,pow,result);

return 0;
}



int power(int bs, int pr)
{
	int temp=bs;
	for(int i=1;i<pr;i++)
	{
		bs=bs*temp;
		printf("\n%d\n",bs);
	}

return bs;
}
