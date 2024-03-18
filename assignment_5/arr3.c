#include<stdio.h>

void scanarr(int *arr);
void display(int *arr);
void revarr(int *arr);

int main()
{
int arr[5];
	scanarr(arr);
	display(arr);
	revarr(arr);
	printf("\nafter reverse \n");
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


void revarr(int *arr)
{
int i,j=4;
	for(i=0;i<j;i++)
	{	int temp;
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
		j--;
	}

return;
}
