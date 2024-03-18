#include<stdio.h>

void scanarr(int *arr);
void display(int *arr);
int max(int *arr);

int main()
{
int arr[5];
	scanarr(arr);
	display(arr);
	
	printf("\nmax of arr= %d\n",max(arr));
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


int max(int *arr)
{
int i,max=0;
	for(i=0;i<5;i++)
	{
	if(arr[i]>max)
	max=arr[i];
	}

return max;
}
