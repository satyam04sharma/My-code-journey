#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		ll a[n+1];
		ll front[n+1];
		ll back[n+1];
		ll sum=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		ll count[n+1];
		for(int i=0;i<n;i++)
		{
			if(i==0||i==n-1)
			count[i]=1;
			else
			count[i]=2;
		}
		ll j=0;
		sum=0;
		for(int i=1;i<n-1;i++)
		{
			front[j++]=sum;
			sum+=a[i];
		}
		j=n-1;sum=0;
		for(int i=n-1;i>=1;i--)
		{
			back[j--]=sum;
			sum+=a[i];
		}
		for(int i=0;i<n-1;i++)
		{
			for(j=i+1;j<n-1;j++)
			{
				if(abs(front[j]-front[i]) <= a[j+1])
				{
					count[i]++;
				}
			}
		}
		for(int i=0;i<n;i++)
		{
			cout<<count[i]<<" ";
		}
		cout<<endl;
		
		for(int i=n-1;i>=1;i--)
		{
			for(j=i-1;j>=1;j--)
			{
				if(abs(back[j]-back[i]) <= a[j-1])
				{
					count[i]++;
				}
			}
		}
		for(int i=0;i<n;i++)
		{
			cout<<count[i]<<" ";
		}cout<<endl;
	}
}
