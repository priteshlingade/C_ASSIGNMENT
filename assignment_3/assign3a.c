#include<stdio.h>
int main()
{

int num,rem=0,add;

printf("enter a number: ");
scanf("%d",&num);


while (num!=0)
{
	add=num%10;
	printf("%d+",add);
	rem=rem+add;
	num=num/10;
	
}
printf("=%d\n",rem);
return 0;
}
