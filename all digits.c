#include<stdio.h>
int main()
{
int n,s=0,r,k;
printf("enter the digits");
scanf("%d",&n);
while(n!=0)
{
r=n%10;
s=s*10+r;
n=n/10;
}
while(s!=0)
{
k=s%10;
printf("%d",k);
s=s/10;
return 0;
}
]
