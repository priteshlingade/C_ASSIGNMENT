#include<stdio.h>

void swap(int *n1,int *n2);


int main()
{
	int num1,num2;

	printf("enter num 1 : ");
	scanf("%d",&num1);

	printf("\nenter num 2 :");
	scanf("%d",&num2);

	swap(&num1,&num2);

	printf("num1=%d\nnum2=%d\n",num1,num2);	
return 0;
}

void swap(int *n1,int *n2)
{
	int ptr;
	ptr=*n1;
	*n1=*n2;
	*n2=ptr;

return ;
}
