#include<stdio.h>
int main()
{
	int n,a[30],avg,sum=0,i;
	printf("\nEnter number:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	avg=sum/n;
	printf("\nAverage is %d",avg);
  return 0;
}
