#include<stdio.h>

int main()
{
int a;
char b;


printf("enter the single char : ");
scanf("%c",&b);

printf("octal =  %d\n",b);

printf("hexa = %x \n",b);

printf("decimal = %d\n ",b);

printf("enter the ascii value : ");
scanf("%d",&a);

printf("\nchar for %d ascii is %c\n ",a,a);

return 0;

}
