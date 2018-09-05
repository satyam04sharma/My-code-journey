#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		int a[n][m];
		vector< pair<int,int> > x;
		int count=0;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				cin>>a[i][j];
				if(a[i][j]==-1)
				{
					count++;
					x.push_back(make_pair(i,j));
				}
			}
		}
		bool flag=true;
		int check1,check2,check11,check22;
		int i=0;
		while(count--)
		{
			int j=x[i].first;
			int k=x[i].second;
			if(j==0&&k==0)
			{
				a[j][k]=0;
				continue;
			}
			else if(j==0 && k>0)
			{
				int k1=k;
				while(a[j][k--]!=-1)
				{
					a[j][k1]=a[j][k+1]+1;
				}
			}
			else if(j>0 && k==0)
			{
				int j1=j;
				while(a[j--][k]!=-1)
				{
					a[j1][k]=a[j+1][k]+1;
				}
			}
			else
			{
				int j1=j;
				int k1=k;
				while(a[j--][k]!=-1)
				{
					check1=a[j+1][k];
				}
				while(a[j1][k--]!=-1)
				{
					check2=a[j1][k+1];
				}
				if(check1==check2)
				{
					a[j1][k1]=check1;
				}
				k=k1;
				j=j1;
				while(a[j++][k]!=-1)
				{
					check11=a[j-1][k];
				}
				while(a[j][++k]!=-1)
				{
					check22=a[j][k];
				}
				if(check1<=check11 && check1<=check22)
				{
					a[j1][k1]=check1;
				}
				else if(check2<=check22 && check2<=check11)
				{
					a[j1][k1]=check2;
				}
				else
				{
					flag=false;
				}
			}
			i++;
			
		}
		if(flag)
		{
			for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				cout<<a[i][j]<<" ";
			}
			cout<<endl;
		}
			
		}
		else
		{
			
			cout<<-1;
		}
	}
}
