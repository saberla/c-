#include <stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	if(a>=90)
	{
		printf("��"); 
    }
    else if(a<90)
	{
		if(a>=80&&a<90)
		{
			printf("����"); 
		}
		else if(a>=70&&a<80)
		{
			printf("�е�"); 
		}
 
	    else if(a>=60&&a<70)
		{
		 	printf("����"); 
		}
		else 
		{
			printf("������");
		}
    }
	return 0;
}
