#include<stdio.h>
   int main()
   {
       int num,i=1,temp;
   
       printf("enter number : ");
       scanf("%d",&num);
   
   
  temp=num;
  
      while (i<temp)
      {
          if (num%i==0)
		  {
	      	temp=num/i;
			printf("%d*%d=%d\n ",i,temp,i*temp);
  		  }
			  
          i++;
      }
  
  return 0;
  }
