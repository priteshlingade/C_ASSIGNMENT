#include<stdio.h>
int main()
{
int year;

printf("enter year ");
scanf("%d",&year);

(year%4==0 && year%100!=0 ||year%400==0)?printf("leap year having 366 days\n"):printf("non leap year having 365 days\n");  

return 0;
}
