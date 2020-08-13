#include <stdio.h>
int main()
{
	double a,b,c;
	printf("enter the angles");
	scanf("%lf%lf%lf",&a,&b,&c);
	if(a+b+c==180)
	{
		printf("triangle is valid");
	}
	else
	{
		printf("unvalid");
	}
	return 0;
	}
	
