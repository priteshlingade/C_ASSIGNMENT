

#include<stdio.h>

void fab(int num);


int main()
{
    int num;
	printf("enter number of terms\n");			// number of terms for fabonics series 
	scanf("%d",&num);						
											
	fab(num);									// function to display fabonic series

return 0;

}


void fab(int num)
{

	int a=0 , b=1;							// initlize first terms of fabonics series
	int next;				
	
	for(int i=1;i<=num;i++)					// loop to display fabonic series till enter number 
		{
			next=a+b;
			printf(" %d",a);
			a=b;
			b=next;
		}

return;
}


