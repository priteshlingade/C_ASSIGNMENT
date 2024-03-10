#include<stdio.h>
int main()
{
	int num,i=1,temp;


	printf("enter a number : ");
	scanf("%d",&num);
	temp= num;

	while (i<temp)
	{

		num=num*i;
		printf("%d*",i);
		i++;
	}

	printf(" = %d\n",num);


return 0;
}
