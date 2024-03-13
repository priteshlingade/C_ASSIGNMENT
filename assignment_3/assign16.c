#include <stdio.h>
#include <stdlib.h>

int main()
{
 int random,num,i;
 char choice;
 random=rand()%100;
		
		printf("GUESS THE NUMBER GAME(1-100)\nrules:\n\t1)if guess<ans '**left**' \n\t2)if guess>ans '**right'\n\t3)you will get 10 chance to guess\n\n");


          printf("%d\n",random);
 do
 {
 	for(i=1;i<=10;i++)
	{
		printf("guess= ");
		scanf("%d",&num);

		if(num==random)
		{
			printf("\ncongrats you WON!\n");
			break;
		}

		else if(num<random)
		{
		printf("\t**Left**  %d chance left\n",10-i);
		}

		else
		{
		printf("\t**Right** %d chance left\n",10-i);
		}

	}


	printf("do you want to play it again !(y/n):");
	scanf("%*c%c",&choice);


 }while(choice !='n');





   return 0;
}
