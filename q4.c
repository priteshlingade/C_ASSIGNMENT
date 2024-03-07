// grade of students


#include<stdio.h>
int main()
{
    int sub1,sub2,sub3,sub4,sub5;

    printf("enter marks \n");
    printf("\nsubject 1=");
    scanf("%d",&sub1);

     printf("\nsubject 2=");
    scanf("%d",&sub2);

     printf("\nsubject 3=");
    scanf("%d",&sub3);

     printf("\nsubject 4=");
    scanf("%d",&sub4);

     printf("\nsubject 5=");
    scanf("%d",&sub5);

    int per;

    per =(sub1+sub2+sub3+sub4+sub5)*100/500;

    printf("\npercent= %d",per);

    if(per>90)
    {
        printf("\ngrade= Ex\n");
    }
    else if(per >80)
       printf("\n grade=  A\n");

    else if(per >70)
       printf("\n grade= B\n");

    else if(per >60)
       printf("\n grade= C\n");

    else if(per <60)
       printf("\n grade= F\n");
 
 
    return 0;
}
