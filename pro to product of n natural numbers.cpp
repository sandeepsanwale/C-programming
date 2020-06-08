#include<stdio.h>
int main()
{ int n,i,s=1;
	printf("Enter natural number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{

		s=s*(n+1-i);
	}
	printf("%d",s);
	return 0;
	
}
