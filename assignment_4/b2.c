#include<stdio.h>

int fun(int b, int p);

int main()
{
	int base,power;

	printf("enter base : ");
	scanf("%d",&base);

	printf("\nenter power :");
	scanf("%d",&power);

	printf("\nanser= %d\n",fun(base,power));


return 0;
}

int fun(int b, int p)
{
	if(p==0)
	return p+1;

	else
	return b*fun(b,p-1);

}
