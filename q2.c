

//find factorial of number


#include<stdio.h>
int main()
{

    int no;

    printf("enter a number = ");
    scanf("%d",&no);

    for (int i=no-1;i>1;i--)
    {
        no=no*i;
    }

    printf("\n factorial of entered no is %d",no);

    return 0;
}