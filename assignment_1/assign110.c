#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	float peri,area,s,d,g;

	printf("enter the value of sides:");
	scanf("%d %d %d",&a,&b,&c);
	
	peri=a+b+c*a+b+c;
	printf("%f",peri);
	
	s=(a+b+c)/2;
	
	printf("value of s is:%f",s);
	
	g=s*(s-a)*(s-b)*(s-c);
	
	area=sqrt(g);
	
	printf("area is %f",g);



	return 0;
}
