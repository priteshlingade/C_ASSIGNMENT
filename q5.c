/*
ascii chart

a-z = 97-122
A-Z = 65- 90
0-9 = 48- 57

*/




#include<stdio.h>
int main()
{
    char data1;
    int data;

    printf("\nenter single character data");
    scanf("%c",&data1);							// take char input from user

    data =data1;


if (97<=data && data<=122)										// check if the data is lower case

    printf("\n entered data %c is lowercase letter \n",data);	

else if (65<=data && data<=90)									// check if the data is upper case

    printf("\n entered data %c is uppercase letter \n",data);

else if (48<=data && data<=57)									// check if data is numeric 

    printf("\n entered data %c is  numerical data \n",data);

else															// if data is symbolic char

    printf("\n entered data %c is other character  \n",data);




    return 0;

}
