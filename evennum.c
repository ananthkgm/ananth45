#include<stdio.h>
int main()
{
	int num,i=0;
	printf("enter the number:\n");
	scanf("&d",&num);
	for(i=num;i>0;i--)
	{
		if(num%2==0)
		{
			printf("%d",num);
			break;
		}
         }
	return 0;
}

