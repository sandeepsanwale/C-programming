//write a function to calculate area of circle(takes something ,returns something)
#include<stdio.h>
float area(int);
 main()
{
	float r;float k;
	printf("entrer the radius");
	scanf("%f",&r);
	k=area(r);
	printf("area of circle is =%f",k);
	return 0;
	
}
float area(int s)
{
	float a;
	a=3.14*s*s;
	return a;
}
