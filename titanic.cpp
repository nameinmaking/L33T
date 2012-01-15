#include <iostream>
#include "conio.h"
using namespace std;
int main()
{
	int t;
	int n;
	int ans=1;
	cin>>t;
	for (int i=0;i<t;i++)
	{
		cin>>n;
		while (ans<n)
		{
			ans=ans*2;
		}
		cout<<ans/2<<"\n";
	}
	getch();
	return 0;
}