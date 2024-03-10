#include<stdio.h>

int main()
{
	int a;

	printf("enter the no. :");
	scanf("%d",&a);

	if (a==0)
	printf("\nnumber is zero\n");

	else if(a>0)
	printf("number is positive\n");

	else
	printf("number is negative\n");



	return 0;
}
