#include<stdio.h>
int main()
{
int num1, num2,result;
char opr,choice;




do
	{
		printf("enter in sequence  no.1  opr  no.2  ");
		scanf("%d%c%d",&num1,&opr,&num2);
		

		switch(opr)
			{
				case '+'	:result=num1+num2;
							printf("\n%d+%d=%d\n",num1,num2,result);
							break;

				case '-'	:result =num1-num2;
							printf("\n%d-%d=%d\n",num1,num2,result);
							break;

				case '*'	:result=num1*num2;
							printf("\n%d*%d=%d\n",num1,num2,result);
							break;

				case '/'	:if(num2!=0)
							{
							result=num1/num2;
							printf("\n%d/%d=%d\n",num1,num2,result);
							break;
							}
							else
							{
							printf("\ncannot divide by 0 !!\n");
							}
							
			}



		printf("do you want to continue.. (y/n)");
		scanf("%*c%c",&choice);



	}while (choice!='n');


return 0;
}
