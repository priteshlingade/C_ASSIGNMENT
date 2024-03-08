/*

program to convert degree to faranite and faranite to degree


formula

oC=(5/9)*(oF-32)


(32°F − 32) × 5/9

*/


#include<stdio.h>
int main()
{

int oc,of;

printf("enter temp (F) :");
scanf("%d",&of);
printf("C= %d°C\n",(of-32)*5/9);


printf("enter temprature(C): ");
scanf("%d",&oc);

printf("F= %d°F",(oc * 9/5) +32);

}
