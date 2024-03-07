

// find the max of number 



#include<stdio.h>
int main()
{
    int a,b;

    printf("\nenter no.1= ");
    scanf("%d",&a);


    printf("\nenter no.2= ");
    scanf("%d",&b);

    if (a>b)
    {
        printf("first no. %d is max\n",a);
    }
    else 
    {
        printf("second no. %d is max \n",b);
    }
    
    return 0;
}