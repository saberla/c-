#include <stdio.h>
int main()
{
	int a[10];
	int i,j,n;
	for(j=0;j<10;j++)
	{
		scanf("%d",&a[j]);
	}
	for(i=0;i<10;i++)
	{
		for(j=i;j<10;j++)
		{
			if(a[j]<0)
			{
				n=a[j];
				a[j]=a[i];
				a[i]=n;
				break;	
			}
		}
	}
	for(i=9;i>0;i--)
	{
		for(j=i;j>0;j--)
		{
			if(a[j]>0)
			{
				n=a[j];
				a[j]=a[i];
				a[i]=n;
				break; 
			}
		}
	}
	for(j=0;j<10;j++)
	{
		printf("%d ",a[j]);
	}
	return 0;
}
