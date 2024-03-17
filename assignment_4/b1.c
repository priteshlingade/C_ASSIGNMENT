#include<stdio.h>
int fact(int num);
int main()
{

	int num,result;

	printf("enter number : ");
	scanf("%d",&num);

	printf("factorial= %d\n",fact(num));
return 0;
}


int fact (int num)
{
		
	if(num==1)
	return 1;

	else
  	return num*fact(num-1);

}
