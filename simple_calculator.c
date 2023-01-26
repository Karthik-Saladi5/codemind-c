#include<stdio.h>
int main()
{
	char operator_;
	printf("Enter the OPERATOR\n");
	scanf("%c",&operator_);
	int a,b,c;
	switch(operator_)
	{
		case '+': printf("Enter the values of and b");
		scanf("%d%d",&a,&b);
		c=a+b;
		printf("%d + %d = %d",a,b,c);
		break;
		
		case '-': printf("Enter the values of and b");
		scanf("%d%d",&a,&b);
		c=a-b;
		printf("%d - %d = %d",a,b,c);
		break;
		
		case '*': printf("Enter the values of and b");
		scanf("%d%d",&a,&b);
		c=a*b;
		printf("%d * %d = %d",a,b,c);
		break;
		
		case '/': printf("Enter the values of and b");
		scanf("%d%d",&a,&b);
		c=a/b;
		printf("%d / %d = %d",a,b,c);
		break;
		
		default : printf(" you didnt chose any thing");
	}
}
