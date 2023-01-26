#include<stdio.h>
int main()
{
	int n,sum=0,temp,r;
	printf("Enter the number\n");
	scanf("%d",&n);
	temp=n;
	while(n!=0)
	{
		r=n%10;
		sum+=(r*r*r);
		n=n/10;
	}
	if(temp==sum)
	{
		printf("Armstrong Number");
	}
	else
	{
			printf(" Not a Armstrong Number");
	}
}
