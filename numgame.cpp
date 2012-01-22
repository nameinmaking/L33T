#include <stdio.h>
int main()
{
int t;
int n;
scanf("%d",&n);
while(n)
{
scanf("%d",&t);
if (t%2==0)
printf("ALICE\n");
else
printf("BOB\n");
n--;
}
return 0;
}
