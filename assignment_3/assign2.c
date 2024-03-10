#include<stdio.h>

int main()
{
	int num;

	printf("enter number ");
	scanf("%d",&num);

	int i=1;
	while (i<10)
	{
		i++;
		int res=i*num;
		printf("%d * %d = %d\n",num,i,res);
	}
	printf("\n");




return 0;
}
