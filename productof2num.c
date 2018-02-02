#include<stdio.h>
int main()
{
int a,b,c;
printf("enter the numbers:\n");
scanf("%d%d",&a,&b);
c=a*b;
if(c%2==0)
{
printf("it is even number");
}
else
{
printf("it is odd number");
}
return 0;
}
