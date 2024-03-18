#include<stdio.h>


int main()
{
int arr[5];
int i;
float result=0;

for( i=1;i<=5;i++)
	{
		printf("\nsub %d marks : ",i);
		scanf("%d",&arr[i]);
	}

for(i=1;i<=5;i++)
	result=result+arr[i];


	result=result/5;

	printf("\navg= %.3f\n",result);

return 0;
}
