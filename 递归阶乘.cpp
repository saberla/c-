#include <stdio.h>
int fact(int n)
{
	if(n==0||n==1)
	return 1;
	else
	n=n*fact(n-1);
	return n;
}
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d!=%d",n,fact(n));
	return 0;
}
