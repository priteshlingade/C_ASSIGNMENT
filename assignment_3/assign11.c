  #include<stdio.h>
   int main()
   {
       int num,temp;
   
   
       printf("enter a number : ");
       scanf("%d",&num);
      temp= num;
  
      for (int i=1;i<temp;i++)
      {
  
          num=num*i;
          printf("%d*",i);
      }
  
      printf(" = %d\n",num);
  
  
  return 0;
  }

