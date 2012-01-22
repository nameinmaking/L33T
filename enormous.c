#include <stdio.h>
int main()
{
int n;
int unsigned long k;
int i;
int count=0;
scanf("%d",&n);
scanf("%lu",&k);
int unsigned long t[n];
for (i=0;i<n;i++)
scanf("%lu",&t[i]);
for (i=0;i<n;i++)
{
if ((t[i]%k)==0)
++count;
}
printf("%d",count);
return 0;
}
