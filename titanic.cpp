#include <stdio.h>
int main()
{
	int t;
	int n;
	int ans;
	scanf("%d",&t);
	for (int i=0;i<t;i++)
	{
                ans=1;
		scanf("%d",&n);
		do
		{
			ans=ans*2;
		}
                while (ans<n);
		printf("%d",ans/2);
                printf("\n");
	}
         return 0;
}