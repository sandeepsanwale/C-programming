#include<stdio.h>
main()
{
	int n,i,s=0,k;
	printf("enter value");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		k=2*i-1;
		s=s+k;
	}
	printf("%d",s);
	}
