#include<stdio.h>
int main()
{
	int base,index,i,temp;


	printf("enter base value: ");
	scanf("%d",&base);

	printf("enter index value :");
	scanf("%d",&index);

	temp=base;


	for (i=1;i<index;i++)
	{
		base=base*temp;

	}

	printf("\nresult= %d\n",base);


return 0;
}
