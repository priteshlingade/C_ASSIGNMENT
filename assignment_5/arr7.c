#include<stdio.h>

void scanarr(int *arr);
void display(int *arr);
void sort(int *arr);


int main()
{
int arr[5];
	scanarr(arr);
	display(arr);

	sort(arr);
	printf("\nafter sorting\n");
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


void sort(int *arr)
{
	for(int i=0;i<4;i++)
	{
		for(int j=i+1;j<5;j++)
		{
			if(arr[i]>arr[j])
			{
				int temp;
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}	
		
		}
	}

return;
}
