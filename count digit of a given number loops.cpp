#include<stdio.h>
int main()
{
	int i,count=0, x=19765,s=0;
	for(count=0;x!=0;x=x/10)
	{
		x=x%10;
		
		s=s+count;
	
	
	}
	printf("%d",s);
}
