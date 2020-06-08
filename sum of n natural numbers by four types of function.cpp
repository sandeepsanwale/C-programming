
//some of n nutural number by function all four types..

#include<stdio.h>
void sum1(void);
void sum2(int);
int sum3(void);
int sum4(int);
main()
{
	sum1();                       //  it is for TNRN
   sum2(5);                        // it is for TSRN
  /*int k;             
   k=sum3();                          // it is for TNRS
   printf("sum is % d",k);*/
  /*int k;                           //it is for TSRS
   k=sum4(10);
   printf("sum is %d ",k);*/	
}
//TNRN
void sum1()
{
	int i,n,s=0;
	printf("enter natural numbers");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		s=s+i;
		
	}
	printf("sum is %d",s);
}

//TSRN
void sum2(int n)
{
	int i,s=0;
	for(i=1;i<=n;i++)
	{
		s=s+i;
	}
	printf("sum is %d",s);
}

//TNRS
int sum3(void)
{
	int i,n,s=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		s=s+i;
			}
return s;
}

//TSRS
int sum4(int n)
{
	int i,s=0;
	for(i=1;i<=n;i++)
	{
		s=s+i;
	}
	return s;
	
}
