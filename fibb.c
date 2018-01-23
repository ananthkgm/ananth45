#include <stdio.h>
int main()
{
int sum=0,num1,num2,i,n;
scanf("%d%d%d",&num1,&num2,&n);
for(i=0;i<n;i++)
{
sum=num1+num2;
printf("%d\n",sum);
num1=num2;
num2=sum;
}
return 0;
}
