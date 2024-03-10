#include<stdio.h>
  int main()
  {
       int num,rem,temp,rev=0;
  		
		

      printf(" enter number");
      scanf("%d",&num);
  		
	temp =num;

      printf(" input=%d\n ",num);
  
      while (num!=0)
      {
	  		
          rem=num%10;
		  rev=rev*10+rem;
          num=num/10;
          
  
  
      }
      printf("\n");
  
  if(temp==rev)
  	printf("number is palendrome\n");
  
  else 
	printf("number is not palendrome\n");

  return 0;
  }

