#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j;
	int t;
	cin>>t;
	while(t--)
	{
		int n,u,d;
	
		cin>>n>>u>>d;
			int h[n];
		for(i=0;i<n;i++)
		{
			cin>>h[i];
		}
		int flag=0;
		for(i=0;i<n-1;i++)
		{
			if(h[i+1]==h[i])
			{
				continue;
			}
			if(h[i+1]>h[i])
			{
				if(h[i+1]-h[i]<=u)
				{
					continue;
				}
				else
				{
					break;
				}
			}
			else if(h[i+1]<h[i])
			{
				if(h[i]-h[i+1]<=d)
				{
					continue;
				}
				else
				{
					if(flag==0)
					{
						flag=1;
					}
					else
					{
						break;
					}
				}
			}
		}
		cout<<i+1<<endl;
	}
}
