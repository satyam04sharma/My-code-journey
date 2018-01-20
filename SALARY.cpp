#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,x,t,n,a[10000],cost=0;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(i<1;i<=n;i++)
		{
			cin>>a[i];
		}
		sort(a+1,a+n+1);
		for(i=1;i<=n;i++)
		cost=cost+a[i]-a[1];
		cout<<cost<<endl;
		cost=0;
	}
}
