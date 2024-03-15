// Factorial

#include<stdio.h>

int fact(int num);

int main()
{
int num,result;

printf("enter number :  ");
scanf("%d",&num);
printf("factor of %d =  ",num);
result=fact(num);
printf("%d\n",result);

return 0;
}


int  fact(int num)
{
	int mul=num;
	for(int i=1;i<mul;i++)
	{
		num=num*i;
	}
return num;
}
