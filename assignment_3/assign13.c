#include<stdio.h>
int main()
{
	int a=1,b=1,next,num;
	
	printf("enter number ");
	scanf("%d",&num);

	for(int i=0;i<num;i++)
	{
	next=a+b;
	printf("%d, ",a);
	a=b;
	b=next;


	}

return 0;
}
