#include <stdio.h>
int main()
{
unsigned long int a[100000];
int n;
int i;
bool flag;
while (n!=0)
{
flag=false;
scanf("%d",&n);
if (n==0)
break;
else
{
for (i=1;i<=n;i++)
scanf("%lu",&a[i]);
for (i=1;i<=n;i++)
if (a[a[i]]!=i)
{
flag=true;
break;
}
if (flag==true)
printf("not ambiguous\n");
else
printf("ambiguous\n");
}
}
return 0;
}
