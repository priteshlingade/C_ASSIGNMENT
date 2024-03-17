#include<stdio.h>
int fabo(int num);
int faboptr(int num);

int main()
{

int num;

	printf("enter number :");
	scanf("%d",&num);

	printf("fabo= %d\n",fabo(num-1));

	faboptr(num-1);
	printf("\n");

return 0;
}


int fabo(int num)				//	print ans
{
static	int next=1,a=0,b=1;
	
	if(num>0)
	{
		next=a+b;
		a=b;
		b=next;
		fabo(num-1);
		return next;

	}
}
int faboptr(int num)				//	print ser
{
static	int next=1,a=0,b=1;
	
	if(num>0)
	{
		next=a+b;
		a=b;
		b=next;
		fabo(num-1);
		printf("%d",next);
		return next;

	}
}
