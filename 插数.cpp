#include <stdio.h>
int main()
{
	int a[20]={2,4,6,8,10,12,14,16};
	int i,j,k,n,b;
	scanf("%d",&k);
	for(i=0;i<9;i++)
	{
		if(k>a[i]&&k<=a[i+1])
		{
		    j=a[i+1];
		    a[i+1]=k;
		    a[i+2]=j;
		  
		}
	}
	for(i=0;i<9;i++)
	{
		printf("%d ",a[i]);
	}
}
