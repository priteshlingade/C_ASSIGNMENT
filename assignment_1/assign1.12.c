#include<stdio.h>
#include<limits.h>
int main()
{

printf("________________________________________________________________________________\n");
printf("Data type\t\tSize\tformat specifier\trange\n");
printf("________________________________________________________________________________\n");

printf("char%23zu\t\t %%c%15d to %d\n",sizeof(char),SCHAR_MIN,SCHAR_MAX);

printf("unsigned char%14zu\t\t %%c%15d to %d\n",sizeof(unsigned char),UCHAR_MAX);

printf("short int%18zu\t\t %%hd%15d to %d\n",sizeof(short int),SHRT_MIN,SHRT_MAX);

printf("int %23zu\t\t %%d%15d to %d\n",sizeof(int ),INT_MIN,INT_MAX);

printf("unsigned short int%9zu\t\t %%hu%15d to %d\n",sizeof(unsigned short int),0,USHRT_MAX);

printf("unsigned int%15zu\t\t %%u%15d to %d\n",sizeof(unsigned int),0,UINT_MAX);

printf("long int%19zu\t\t %%ld%15d to %d\n",sizeof(long int),LONG_MIN,LONG_MAX);

printf("unsigned long int%10zu\t\t %%c%15d to %d\n",sizeof(unsigned long int),ULONG_MAX);



printf("________________________________________________________________________________\n");

return 0;
}
