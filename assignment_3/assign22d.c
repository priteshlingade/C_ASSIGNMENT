#include<stdio.h>
int main()
{
	int i,j,temp=5;

	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
		
			printf("%d ",temp);
			temp--;
		}

		temp=5;
	printf("\n");
	}





return 0;
}
