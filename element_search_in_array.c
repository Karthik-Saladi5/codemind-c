#include<stdio.h>
int main()
{
	int n,i,c=0,s;
	printf("Enter the size of array\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements of the array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);	
	}
	printf("Enter the element for search\n");
	scanf("%d",&s);
	for(i=0;i<n;i++)
	{
		if(a[i]==s)
		{
			c=1;
			break;
		}	
	}
	if(c==0)
	{
		printf("ELEMENT NOT FOUND IN THE ARRAY");
	}
	else
    {
    	printf("ELEMENT FOUND IN THE ARRAY");
	}
}
