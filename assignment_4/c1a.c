#include<stdio.h>

int addint (int a,int b);

int result;

int main()
{
	int a,b;

	printf("enter num1 : ");
	scanf("%d",&a);
	printf("\nenter num 2 : ");
	scanf("%d",&b);
	

	printf("mul= %d\n",add(a,b));

	printf("add= %d\n",result);
return 0;
}


int add(int a,int b)
{
	result=a+b;
return a*b;
}

