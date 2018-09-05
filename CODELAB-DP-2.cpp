#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n+1];
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	int sum;
	cin>>sum;
	a[n]=sum;
	int f[n]={0};
	f[n]=sum;
	for(int i=n;i>=0;i++)
	{
		f[i]=f[i]-(sum-a[i]);
	}
}
