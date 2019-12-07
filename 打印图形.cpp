#include <stdio.h>
int main()
{
	int a,i,j,n;
	scanf("%d",&a);
	for(i=1;i<=2*a-1;i++)
	{
		printf("%d",a);
		if(i==2*a-1)
		{
			printf("\n");
			printf(" ");
			for(j=1;j<=2*(a-1)-1;j++)
		    {
				printf("%d",a-1);
		    }
	    }
	}
	
	
	return 0; 
}
