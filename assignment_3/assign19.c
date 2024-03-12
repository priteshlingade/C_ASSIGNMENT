#include<stdio.h>
int main()
{
	int i,j,k,l;
	printf("print table from : ");
	scanf("%d",&k);

	printf("\nprint table upto :");
	scanf("%d",&l);



	for(i=1;i<=10;i++)
	{
		for(j=k;j<=l;j++)
		{
			printf("\t%d",i*j);
		}
	printf("\n");
	}

return 0;
}
