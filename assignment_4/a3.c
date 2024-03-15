#include<stdio.h>
int calcy(int n1,char op,int n2);

int main()
{
	int num1,num2,result;
	char opr;

	printf("enter (num1 opr num2) : ");
	scanf("%d%c%d",&num1,&opr,&num2);

	result=calcy(num1,opr,num2);

	printf("\n%d %c %d = %d\n",num1,opr,num2,result);




return 0;
}


int calcy(int n1,char op,int n2)
{
 switch(op)
 {

		case '+': return n1+n2;
					break;

		case '*' : return n1*n2;
					break;

		case '-': return n1-n2;
					break;

		case '/': if(n2!=0)
					return n1/n2;
					break;
	
 }

return 0;
}
