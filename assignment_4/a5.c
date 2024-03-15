#include<stdio.h>
void nopr(char ch,int num);
int main()
{

int num;
char ch;

printf("enter char : ");
scanf("%c",&ch);

printf("no. of times to print : ");
scanf("%d",&num);

nopr(ch,num);


return 0;
}




void nopr(char ch,int num)
{

for(int i=0;i<num;i++)
{
	printf("%c ",ch);
}
printf("\n");
return;
}
