#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	int t,n,i,j,y;
	cin>>t;
	while(t--)
	{
		vector< vector<int> > a;
		cin>>n;
		for(i=0;i<n;i++)
		{
			vector<int> v;
			for(j=0;j<n;j++)
			{
				cin>>y;
				v.push_back(y);
			}
			sort(v.begin(),v.end());
			a.push_back(v);
		}
		ll cost=0;
		int flag=1;
		int m=a[n-1][n-1];
		cost+=m;
		int x=n-2;
		while(x>=0&&flag==1)
		{
			flag=0;
			for(j=n-1;j>=0;j--)
			{
				if(a[x][j]<m)
				{
					m=a[x][j];
					cost+=m;
					flag=1;
					break;
				}
			}
			x--;
		}
		if(flag==1)
		{
			cout<<cost<<endl;
		}
		else
		cout<<"-1"<<endl;
	}
}
