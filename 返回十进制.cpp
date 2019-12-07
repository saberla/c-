#include <stdio.h>
#include <math.h>
int digit(int n,int k)
{
	n=n%(int)pow(10,k)/(int)pow(10,k-1);
	return n;
}
int main()
{
	int n,k; 
	scanf("%d,%d",&n,&k);
	printf("%d",digit(n,k));
	return 0;
}
