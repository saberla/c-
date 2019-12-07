#include <stdio.h>
int isprime(int n)
{
	int i,j;
	if(n<2)
	{
		return -1;
	}
	else
	{
		for(i=2;i<n;i++)
		{
			if(n%i==0)
			j=0;
		}
		if(j==0)
		return 0;
		else
		return 1; 
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",isprime(n));
}
