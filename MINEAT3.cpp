#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pob pop_back
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		ll n,h;
		cin>>n>>h;
		vector<ll>a;
		ll x;
		ll sum=0;
		for(ll i=0;i<n;i++)
		{
			cin>>x;
			a.pb(x);
			sum+=x;
		}
		sort(a.begin(),a.end());
		x=sum/h;
		ll ele;
		vector<ll>::iterator it;
		
		for(ll i=x;i<=a[n-1];i++)
		{
			ele=i;
			vector<ll> p=a;
			it=p.begin();
			ll d=h;
			//cout<<i<<" ";
			while(d>0)
			{
				if(p.size()==0)
				break;
				if(*it<=ele)
				{
					p.erase(it);
					d--;
				}
				else if(*it>ele)
				{
					*it-=ele;
					d--;
				}
			}
			if(p.size()==0)
			{
				//for(it=p.begin();it!=p.end();it++)
				//cout<<" "<<*it;
				cout<<ele<<endl;
				break;
			}
		}
	}
} 
