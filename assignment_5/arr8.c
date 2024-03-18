#include<stdio.h>

void scanarr(int *arr);
void display(int *arr);
int findele(int *arr,int key);


int main()
{
int arr[5];
int key,index;

	scanarr(arr);
	display(arr);

	printf("enter key :");
	scanf("%d",&key);

	index =findele(arr,key);

	if(index==-1)
	printf("\nkey not found\n");

	else
	printf("\nkey found at %d index\n",index);


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


int findele(int *arr,int key)
{
	for(int i=0;i<5;i++)
	{
		if(key==arr[i])
		return i;

	}

return-1;
}
