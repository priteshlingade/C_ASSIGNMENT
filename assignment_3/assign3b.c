#include<stdio.h>
int main()
{
	int num,rev;

	printf(" enter number");
	scanf("%d",&num);

	printf(" input=%d\n ",num);
	printf("reverse= ");
	while (num!=0)
	{
		rev=num%10;
		num=num/10;
		printf("%d",rev);


	}
	printf("\n");



return 0;
}
