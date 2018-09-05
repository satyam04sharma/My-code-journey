#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	int n;
	cin>>n;
	int c[n],d[n];
	vector<pair<ll,ll> > a(n);
	for(int i=0;i<n;i++)
	{
		cin>>c[i];
	}
	for(int i=0;i<n;i++)
	{
		cin>>d[i];
	}
	for(int i=0;i<n;i++)
	{
		a[i]=make_pair(c[i],d[i]);
	}
	sort(a.begin(),a.end());
	ll min1=INT_MAX,min2=INT_MAX,min3=INT_MAX;
	for(int i=0;i<n;i++)
	{
		if(a[i].second==3)
		{
			min1=min(min1,a[i].first);
		}
		if(a[i].second==2)
		{
			min2=min(min2,a[i].first);
		}
		if(a[i].second==1)
		{
			min3=min(min3,a[i].first);
		}
	}
	cout<<min(min1,min2+min3)<<endl;

}
