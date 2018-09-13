#include<bits/stdc++.h>
using namespace std;
int a[1000][1000];
int count=0,i=0,j=0,x,n,m;
void back_track(int x,int count,int i,int j)
{
	if(a[i][j] == -1 || count == x)
	{
		return;
	}
	else if(i<n && j<m)
	{
		if(a[i][j]>=0)
		{
			count++;
			a[i][j]++;
			back_track(x,count,i+1,j);
			back_track(x,count,i-1,j);
			back_track(x,count,i,j+1);
			back_track(x,count,i,j-1);
		}
		else
		return;
	}
	else
	return;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		
		cin>>n>>m;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				cin>>a[i][j];
			}
		}
		/*for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				cout<<a[i][j];
			}
			cout<<endl;
		}*/
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				if(a[i][j]>0)
				back_track(a[i][j],0,i,j);
			}
		}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				if(a[i][j]==-1)
				cout<<"B";
				else if(a[i][j]>=0)
				cout<<"Y";
				else
				cout<<"N";
			}
			cout<<endl;
		}
	}
}
