#include<stdio.h>
void bin(int a);

int main()
	{
		int num;

		printf("enter decimal no. ");
		scanf("%d",&num);

		printf("octal number of %d = %o\n",num,num);
		printf("hex number of %d = %x\n",num, num);
		printf("binary number of %d = ",num);
		bin(num);
		printf("char of number %d = %c\n",num,num);


	return 0;
}



void  bin(int num)
	{
	
		if (num == 0)
		return;

		bin(num/2);
		printf("%d",num%2);
	}

