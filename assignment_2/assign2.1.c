#include<stdio.h>

int main()

{
int a,b;

	printf("enter n1 :");
	scanf("%d",&a);

	printf("\nenter n2 :");
	scanf("%d",&b);

	if(b==0)
	printf("\nerror !\n");

	else
	{
		int c=a/b;
		printf("division= %d\n",c);

	}

return 0;

}
