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
		int n,h;
		cin>>n>>h;
		vector<int>a;
		ll x;
		ll sum=0;
		for(int i=0;i<n;i++)
		{
			cin>>x;
			a.pb(x);
			sum+=x;
		}
		sort(a.begin(),a.end());
		x=sum/h;
		ll ele;
		vector<int>::iterator it;
		for(int i=x;i<=a[n-1];i++)
		{
			ele=i;
			vector<int> p=a;
			it=p.begin();
			for(int j=0;j<h;j++)
			{
				if(p.size()==0)
				break;
				if(*it<=ele)
				{
					p.erase(it);
				}
				else if(*it>ele)
				{
					*it-=ele;
					it++;
				}
				if(it==p.end())
				it=p.begin();
			}
			if(p.size()==0)
			{
				cout<<ele<<endl;
				break;
			}
		}
	}
} 
