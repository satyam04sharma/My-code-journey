#include<iostream>
#define ll long long
ll a[10000]={0};
ll end[10000][1000]={0};
using namespace std;
int main()
{
	short t;
	cin>>t;
	while(t!=0)
	{
		ll n,m,x,y,z;
		cin>>n>>m;
		a[n]={0};
		end[m][n]={0};
		for(ll i=0;i<m;i++)
		{
			cin>>x>>y>>z;
			if(x==1)
			{
				for(ll j=y-1;j<z;j++)
				{
					a[j]++;
					end[i][j]++;
				}
			}
			if(x==2)
			{
				ll sum=0;
				for(ll f=0;f<n;f++)
				{
					sum+=end[i][f];
				}
				if(sum==0)
				{
					for(ll j=y-1;j<z;j++)
					{
						for(ll h=0;h<n;h++)
						{
							end[i][h]+=end[j][h];
						}
					}
					for(ll h=0;h<n;h++)
					{
					    a[h]+=end[i][h];
					}
				}
				else
				{
					for(ll h=0;h<n;h++)
					{
						a[h]+=end[i][h];
					}
				}
			
			}
		
		}
			for(ll h=0;h<n;h++)
			cout<<a[h];
			cout<<endl;
			t--;
	}	
}
