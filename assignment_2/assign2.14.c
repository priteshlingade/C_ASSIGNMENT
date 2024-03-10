#include<stdio.h>
int main()
{

	int a,b,result;
	char ch;


	printf("enter no.1 : ");
	scanf("%d",&a);

	printf("\nenter opr :");
	scanf("%*c%c",&ch);

	printf("\nenter no.2 :");
	scanf("%d",&b);


	switch (ch)
	{

		case '+': printf("%d + %d = %d\n",a,b,a+b);
					break;

		case '*': printf("%d * %d = %d\n",a,b,a*b);
					break;

		case '-': printf("%d - %d = %d\n",a,b,a-b); 
					break;

		case '/': printf("%d / %d = %d\n",a,b,a/b); 
					break;

		default : printf("invalid input\n");
	}


return 0;
}
