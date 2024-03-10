#include <stdio.h>
int main()
{
char ch;
int num;

printf("enter char :");
scanf("%c",&ch);

printf("\nenter number :");
scanf("%d",&num);

int i=0;
while (i<num)
{
printf("%c ",ch);
i++;
}
printf("\n");
return 0;
}
