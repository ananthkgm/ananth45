#include<stdio.h>
int main()
{
char str[20];
int i,count1=0,count2=0,count;
gets(str);
for(i=0;str[i]!='\0';i++)
{
if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z') )
{
count1++;
}
else if(str[i]>='0' && str[i]<='9')	
{
count2++;
}
}
if((count1>0) && (count2>0))
  printf("yes");
  else
    printf("no");
return 0;

}
