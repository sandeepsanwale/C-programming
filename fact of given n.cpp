#include<stdio.h>
int fun(int);
int main()
{
	int k,fact;
	printf("enter number");
	scanf("%d",&k);
	fact=fun(k);
	printf("fact is %d",fact);
	
}
int fun(int a)
{
	int s;
	if(a==1)
	return a;
	s=a*fun(a-1);
	return s;
}
