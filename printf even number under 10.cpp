#include<stdio.h>
main()
{

int n,i=0,s=0;
printf("Enter natural number");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
	s=s+(n-i);
	
}
printf("%d",s);
}
