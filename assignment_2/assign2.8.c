#include<stdio.h>
int main()
{

	int qut,tot,final,save;

	printf("enter quantity of product : ");
	scanf("%d",&qut);
	printf("per unit  5 Rs/-\n");

	if(qut>50)
	{
		tot=qut*5;
		save=(tot*15)/100;
		final=tot-save;

		printf("Total bill  = %d Rs/-\n",tot);
		printf("15%% discount save = %d Rs/-\n",save);
		printf("Pay= %d Rs/-\n",final);

	}


	else if(qut>30)
	{
		
		tot=qut*5;
		save=tot*10/100;
		final=tot-save;

		printf("Total bill  = %d Rs/-\n",tot);
		printf("10%% discount save = %d Rs/-\n",save);
		printf("Pay= %dRs/-\n",final);
	}

	else
	{

		tot=qut*5;

		printf("Total bill  = %d Rs/-\n",tot);
		printf("Pay= %d Rs/-\n",tot);

	}

return 0;
}
