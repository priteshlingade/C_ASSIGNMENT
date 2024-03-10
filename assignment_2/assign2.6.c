#include<stdio.h>
int main()
{

int temp,num,rev=0,rem=0;




printf("enter a 5 digit number ");
scanf("%d",&num);

num=temp;

up:rem =num%10;
rev =rev*10+rem;
num=num/10;

	if(num!=0)
	goto up;


	if(rev==temp)
	{
		printf("number is palendrome\n");
	}
	else
	{
		printf("number is not palendrome\n");
	}

return 0;
}
