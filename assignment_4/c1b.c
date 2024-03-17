#include<stdio.h>

int  fun(int a,int b,int *res);




int main()
{
	int a,b;
	int res;

	printf("enter num1 : ");
	scanf("%d",&a);

	printf("\nenter num2 : ");
	scanf("%d",&b);


	printf("add= %d\n",fun(a,b,&res));
	printf("mul= %d\n",res);
return 0;
}


int fun(int a, int b, int *res )
{
	*res= a*b;
		
return a+b ;
}
