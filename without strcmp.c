#include<stdio.h>
int main()
{
	char a[50],b[50];
	int la,lb;
	printf("Enter the strings:");
	scanf("%s",&a);
	scanf("%s",&b);
	la=strlen(a);
	lb=strlen(b);
	if(la>lb)
	{
		printf("\n%s",a);
	}
	else
	{
		printf("\n%s",b);
    return;
	}
}
