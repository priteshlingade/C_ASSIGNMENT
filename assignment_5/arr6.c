#include<stdio.h>

void scanarr(int *arr);
void display(int *arr);
int dup(int *arr);

int main()
{
int arr[5];
	scanarr(arr);
	display(arr);
	printf("\nunique number=%d\n",dup(arr));
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


int dup(int *arr)
{
	int i,j,count=0;
	for(i=0;i<4;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(arr[i]==arr[j])
			{
				arr[j]=0;
				count++;
			}
		}
	}

count=5-count;
return count;
}
