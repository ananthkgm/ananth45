
#include<stdio.h>
int main()
{
	int v,count=0;
	scanf("%d",&v);
	while(v!=0)
	{
		v=v/10;
    count++;
	}
	printf("%d",count++);
  return 0;
}
