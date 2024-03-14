#include <stdio.h>
#include <stdio.h>
#include <time.h>
   
   
int main()
{
 int random,num,i;
 char choice;
		
		printf("\n\n\nGUESS THE NUMBER GAME!!! (1-100)\n\nRULES:\n\t1)if guess no is less than ans you will see '**left**' \n\t2)if guess no. is greater than ans you will see '**right**'\n\t3)you will get 10 chance to guess\n\n");

		printf("\nNUMBER= ???\n\n");
 do
 {
 
       srand(time(0)); // let's set the seed with unix timestamp
       int n = rand();
      // printf("Pseudo-random number: %d\n", n);
		
		random=n%100;
	//	printf("%d\n",random);

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
	if(i>10)
	printf("\n\nYOU LOOS THE GAME !!!\n\n");

	printf("\n\ndo you want to play it again !(y/n):");
	scanf("%*c%c",&choice);


 }while(choice !='n');





   return 0;
}
