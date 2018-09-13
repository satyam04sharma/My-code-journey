#include<bits/stdc++.h>
using namespace std;
	int x[300];
		int a[300][10000];
int main()
{
	int W,n;
	cin>>W>>n;
	n=n+1;
	W+=1;

	x[0]=0;
	for(int i=1;i<n;i++)
	{
		cin>>x[i];
	}
	sort(x+1,x+n);

	for(int i=1;i<W;i++)
	{
		a[0][i]=0;
	}
	for(int i=0;i<=n;i++)
	{
		a[i][0]=0;
	}
	for(int i=1;i<n;i++)
	{
		for(int j=1;j<W;j++)
		{
			if(j<x[i])
			{
				a[i][j]=a[i-1][j];
			}
			else
			{
				a[i][j]=max(a[i-1][j],a[i-1][j-x[i]]+x[i]);
			}
		}
	}
/*	for(int i=1;i<n;i++)
	{
		for(int j=1;j<W;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}*/
	cout<<a[n-1][W-1]<<endl;
	
}
