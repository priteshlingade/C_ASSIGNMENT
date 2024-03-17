#include<stdio.h>
int fun(int n1,char op,int n2,int *ptr);
int main()
{

	int num1,num2,result,flag=0;
	char opr;


	printf("entersequence (num1 opr num2) :");
	scanf("%d%c%d",&num1,&opr,&num2);

	flag=fun(num1,opr,num2,&result);
	
	if (flag==-1)
	printf("Division Zero error !!\n");

	else
	printf("result =%d\n",result);

	

return 0;
}



int fun(int n1,char op,int n2,int *ptr)
{
	switch(op)
	{
		case '+' : *ptr=n1+n2;
					break;

		case '-' : *ptr=n1-n2;
					break;

		case '*' : *ptr=n1*n2;
					break;

		case '/' : if(n2==0)
					return -1;

					*ptr=n1/n2;
					break;

		default : printf("oprand invalid error !!\n");

	}


return 0;
}
