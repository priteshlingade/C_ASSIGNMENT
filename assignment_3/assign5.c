 #include<stdio.h>
   int main()
   {
       int num,i=1,temp,dec;
   
   
       printf("enter a number : ");
       scanf("%d",&num);
       temp= num;
 		dec=temp;

		printf("\n%d*",dec);
      while (i<temp)
      {
  
          num=num*i;
          i++;
		  dec--;
          printf("%d*",dec);
      }
  
      printf(" = %d\n",num);
  
  
  return 0;
  }


