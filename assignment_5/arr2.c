#include<stdio.h>

void scanarr(int *arr);
void display(int *arr);

int main()
{
int arr[5];


	scanarr(arr);

	display(arr);

return 0;
}


void scanarr(int *arr)
{
	for(int i=0;i<5;i++)
	{
		printf("\narr[%d]= ",i);
		scanf("%d",&arr[i]);
	}
return ;
}


void display(int *arr)
{

	for(int i=0;i<5;i++)
	{
		printf("\narr[%d]=%d ",i,arr[i]);
	}
	
	printf("\n");
return;
}
