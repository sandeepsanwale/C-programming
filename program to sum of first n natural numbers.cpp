//takes nothing return something
#include<stdio.h>
int sum(void);
 main()
{
	int k;
//	printf("enternumber ");
//	scanf("%d",&n);
	k=sum();
	printf("sum is=%d",k);
	
}
int sum( void)
{
	int s,n;
	printf("value");
	scanf("%d",&n);
	if(n==1)
	return n;
	s=n+sum();
	return s;
}
