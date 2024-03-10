   #include<stdio.h>
   int main()
   {
       int a,b,c;
   
       printf("enter first no.");
       scanf("%d",&a);
   
       printf("\nenter second no.");
      scanf("%d",&b);
 		
		printf("enter third no. ");
		scanf("%d",&c);

  /*
      if(a>b && a>c)
      printf("first no. is greater \n");
  
  
      else if(b>a && b>c) 
      printf("second no is greater \n");

		else
		printf("third number is greater \n");
 */


  (a>b && a>c)?printf("first number is greater\n"):(b>a && b>c)?printf("second number is greater\n"):printf("third number is greater\n") ;
      return 0;
 }
