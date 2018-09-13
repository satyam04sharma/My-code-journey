#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,o;
	cin>>n;
	int a[n+1];
	for(int i=0;i<n;i++)
	cin>>a[i];
	cin>>m;
	int b[m+1];
	for(int i=0;i<m;i++)
	cin>>b[i];
	cin>>o;
	int d[100];
	for(int i=0;i<m;i++)
	cin>>d[i];
	int c[n+2][m+2];
	int list[n+2][m+2];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			c[i][j]=0;
			list[i][j]=3;
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(a[i]==b[j])
			{
				if(i==0 || j==0)
				{
					c[i][j]=1;
					list[i][j]=1;
				}
				else
				{
					c[i][j]=c[i-1][j-1]+1;
					list[i][j]=1;
				}
				
			}
			else
			{
				if(i>0 && j>0)
				{
					if(c[i][j-1]>=c[i-1][j])
					{
						c[i][j]=c[i][j-1];
						list[i][j]=0;
					}
					else
					{
						c[i][j]=c[i-1][j];
						list[i][j]=2;
					}
				}
				else if(i==0 && j>0)
				{
					c[i][j]=c[i][j-1];
					list[i][j]=0;
				}
				else if(j==0 && i>0)
				{
					c[i][j]=c[i-1][j];
					list[i][j]=2;
				}
				
			}
		}
	}
	vector<int> a2;
	int i=n-1,j=m-1;
	int count=0;
	while(i>=0 || j>=0)
	{
		if(list[i][j]==1)
		{
			a2.push_back(c[i][j]);
			i--;
			j--;
			count++;
		}
		else if(list[i][j]==0)
		{
			j--;
		}
		else if(list[i][j]==2)
		{
			i--;
		}
		else
		break;
	}
	reverse(a2.begin(),a2.end());
	/*for(int i=0;i<count;i++)
	{
		cout<<a2[i]<<" ";
	}
	cout<<"******************"<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<c[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"*******************"<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<list[i][j]<<" ";
		}
		cout<<endl;
	}*/
	//cout<<c[n-1][m-1];
	for(int i=0;i<o;i++)
	{
		for(int j=0;j<count;j++)
		{
			c[i][j]=0;
			list[i][j]=3;
		}
	}
	for(int i=0;i<o;i++)
	{
		for(int j=0;j<count;j++)
		{
			if(a2[i]==d[j])
			{
				if(i==0 || j==0)
				{
					c[i][j]=1;
				}
				else
				{
					c[i][j]=c[i-1][j-1]+1;
				}
				
			}
			else
			{
				if(i>0 && j>0)
				{
					if(c[i][j-1]>=c[i-1][j])
					{
						c[i][j]=c[i][j-1];
					}
					else
					{
						c[i][j]=c[i-1][j];
					}
				}
				else if(i==0 && j>0)
				{
					c[i][j]=c[i][j-1];
				}
				else if(j==0 && i>0)
				{
					c[i][j]=c[i-1][j];
				}
				
			}
		}
	}
		for(int i=0;i<o;i++)
	{
		for(int j=0;j<count;j++)
		{
			cout<<c[i][j]<<" ";
		}
		cout<<endl;
	}
	//cout<<c[o-1][count-1]<<endl;
}

