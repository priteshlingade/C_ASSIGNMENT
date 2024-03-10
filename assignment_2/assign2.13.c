
/*
program to find cordniates

*/



#include<stdio.h>
int main()
{
	int x,y;
	printf("enter X co-ordinate : ");
	scanf("%d",&x);

	printf("\nenter Y co-ordinate : ");
	scanf("%d",&y);
		
		if(x>0 && y>0)
		printf("point lies in 1st cordniate \n");

		else if(x<0 && y>0)
		printf("point lies in 2nd codrant \n");

		else if(x<0 && y<0)
		printf("point lies in 3nd codrant \n");

		else if(x>0 && y<0)  
		printf("point lies in 4th codrant \n");
//------------------------------------------------------------------------------	
		else if(x==0 && y>0)
		printf("point lies in +y axis  \n");
	
		else if(x==0 && y<0)
		printf("point lies in -y axis \n");

		else if(x<0 && y==0)
		printf("point lies in -x axis \n");

		else if(x>0 && y==0)
		printf("point lies in +x axis \n");
	
		else
		printf("point lies in origin\n");


return 0;
}
