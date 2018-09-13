#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
const ll m=1000005;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		ll a[n];
		ll dp[m];
		memset(dp,0,m);
		for(ll i=0;i<n;i++)
		{
			cin>>a[i];
			dp[a[i]]=1;
		}
		
		long long total=0;
		sort(a,a+n);
		ll max=a[n-1];
		for(ll i=0;i<n;i++)
		{
			for(ll j=2*a[i];j<=max;j+=a[i])
			{
                dp[j]=(dp[j]+dp[a[i]])%mod;			
			}
			total=(total+dp[a[i]])%mod;
		}
		cout<<total%mod<<endl;
	}
}
