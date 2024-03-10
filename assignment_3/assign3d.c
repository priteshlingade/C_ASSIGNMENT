#include<stdio.h>
int main()
{

	int num,rev, res=0,temp;

	printf("enter 3 digit number :");
	scanf("%d",&num);


	temp= num;


	while(num!=0)
	{
		rev=num%10;
		num=num/10;
		res=res+(rev*rev*rev);

	}

	if (res==temp)
		printf("\nit is a armstrong number\n");
	
	else
		printf("it is not a armstrong number\n");

return 0;
}
