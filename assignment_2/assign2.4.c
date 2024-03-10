#include<stdio.h>
int main()
{
	int a,b;

	printf("enter first no.");
	scanf("%d",&a);

	printf("\nenter second no.");
	scanf("%d",&b);

/*
	if(a>b)
	printf("first no. is greater \n");


	else 
	printf("second no is greater \n");


*/
(a>b) ?printf("first number is greater\n"):printf("second number is greater\n") ; 

	return 0;
}
