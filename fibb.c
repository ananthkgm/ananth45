#include <stdio.h>
int main()
{
int sum=0,no1,no2,i,n;
scanf("%d%d%d",&no1,&no2,&n);
for(i=0;i<n;i++)
{
sum=no1+no2;
printf("%d\n",sum);
no1=no2;
no2=sum;
}
return 0;
}
