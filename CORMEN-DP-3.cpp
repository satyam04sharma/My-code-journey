#include<bits/stdc++.h>
using namespace std;
int main()
{
	string x,y;
	cin>>x>>y;
	int m=y.length();
	int n=x.length();
	int c[m+1][n+1];
	int b[m+1][n+1];
	for(int i=0;i<=m;i++)
	{
		for(int j=0;j<=n;j++)
		{
			c[i][j]=-1;
		}
	}
	for(int i=0;i<=m;i++)
	c[i][0]=0;
	for(int i=0;i<=n;i++)
	c[0][i]=0;
	for(int i=0;i<=m;i++)
	{
		for(int j=0;j<=n;j++)
		{
			b[i][j]=0;
		}
	}
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(x[j-1]==y[i-1])
			{
				c[i][j]=c[i-1][j-1]+1;
				b[i][j]=0;	
			}
			else if(c[i-1][j]>=c[i][j-1])
			{
				c[i][j]=c[i-1][j];
				b[i][j]=1;
			}
			else
			{
				c[i][j]=c[i][j-1];
				b[i][j]=2;
			}
		}
	}
	int i=m;int j=n;
	while(i>0||j>0)
	{
		if(b[i][j]==0)
		{
			cout<<x[j-1]<<" ";
			i--,j--;
		}
		else if(b[i][j]==1)
		i--;
		else
		j--;
	}
	cout<<endl;
	cout<<"----------------"<<endl;
	for(int i=0;i<=m;i++)
	{
		for(int j=0;j<=n;j++)
		{
			cout<<b[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"----------------"<<endl;
	for(int i=0;i<=m;i++)
	{
		for(int j=0;j<=n;j++)
		{
			cout<<c[i][j]<<" ";
		}
		cout<<endl;
	}
}
