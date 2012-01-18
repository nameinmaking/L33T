#include <stdio.h>
int main()
{
int n,i,num,count,tmp;
scanf ("%d",&n);
for (i=0;i<n;i++)
{
count=0;
scanf ("%d",&num);
while (num)
{
tmp=num/5;
count=count+tmp;
num=tmp;
}
printf("%d",count);
printf("\n");
}
return 0;
