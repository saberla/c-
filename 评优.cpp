#include <stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	if(a>=90)
	{
		printf("优"); 
    }
    else if(a<90)
	{
		if(a>=80&&a<90)
		{
			printf("良好"); 
		}
		else if(a>=70&&a<80)
		{
			printf("中等"); 
		}
 
	    else if(a>=60&&a<70)
		{
		 	printf("及格"); 
		}
		else 
		{
			printf("不及格");
		}
    }
	return 0;
}
