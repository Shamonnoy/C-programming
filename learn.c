#include <stdio.h>
int main()
{
	int n,i;
	printf("\nEnter the size of array:");
	scanf("%d",&n);

	int *p;
	p=(int *)malloc(n * sizeof(int));
	printf("\nEnter the array element:\n");
	for(i=0 ; i<n ; i++)
	{
		scanf("%d",(p + i));
	}
	
	int flag=0,val;
	printf("\nEnter the value to be searched:");
	scanf("%d",&val);
	for(i=0 ; i<n ; i++)
	{
		if(*(p+i)==val)
		{
			printf("\nvalue found at %dth position",(i+1));
			flag=1;
			break;
		}
	}

	if(flag==0)
		{
			printf("\nvalue not found");
			return 0;
		}
}