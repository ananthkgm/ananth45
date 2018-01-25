#include <stdio.h>
int main() 
{
	int n,min,max,i,a[50];
	printf("enter the no");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	min=max=a[0];
	for(i=0;i<n;i++)
	{
	if(a[i]>max)
		max=a[i];
    printf("max no is %d:",max);
	else
		min=a[i];
    printf("min no is %d:",min);
	}
return 0;
}
