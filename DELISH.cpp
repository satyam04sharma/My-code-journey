#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll> max_left(ll a[],ll n)
{
	vector<ll> res(n+1);
	ll curr_sum=a[0];
	res[0]=a[0];
	for(ll i=0;i<n;i++)
	{
		res[i]=0;
	}
	for(ll i=1;i<n;i++)
	{
		curr_sum=max(a[i],curr_sum+a[i]);
		res[i]=max(res[i-1],curr_sum);
		//res[i]=max_sum;
	}
	
	return res;
}
vector<ll> min_left(ll a[],ll n)
{
		vector<ll> res(n+1);
	ll curr_sum=a[0];
	for(ll i=0;i<=n;i++)
	{
		res[i]=0;
	}
	res[0]=a[0];
	for(ll i=1;i<n;i++)
	{
		curr_sum=min(a[i],curr_sum+a[i]);
		res[i]=min(res[i-1],curr_sum);
	//	res[i]=min_sum;
	}
	
	return res;
}
vector<ll> max_right(ll a[],ll n)
{
		vector<ll> res(n+1);
	ll curr_sum=a[n-1];
	for(ll i=0;i<=n;i++)
	{
		res[i]=0;
	}
	res[n-1]=a[n-1];
	for(ll i=n-2;i>=0;i--)
	{
		curr_sum=max(a[i],curr_sum+a[i]);
		res[i]=max(res[i+1],curr_sum);
		//res[i]=max_sum;
	}
	
	return res;
}
vector<ll> min_right(ll a[],ll n)
{
		vector<ll> res(n+1);
	ll curr_sum=0;
	for(ll i=0;i<=n;i++)
	{
		res[i]=0;
	}
	res[n-1]=a[n-1];
	curr_sum=a[n-1];
	for(ll i=n-2;i>=0;i--)
	{
		curr_sum=min(a[i],curr_sum+a[i]);
		res[i]=min(curr_sum,res[i+1]);
	}
	return res;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		ll a[n+1];
		for(ll i=0;i<n;i++)
		cin>>a[i];
		ll diff=0;
		/********************************/
		vector<ll> min_left1=min_left(a,n);
		vector<ll> min_right1=min_right(a,n);
		vector<ll> max_left1=max_left(a,n);
		vector<ll> max_right1=max_right(a,n);
		for(int i=0;i<n-1;i++)
		{
			//cout<<max_left1[i]<<" "<<min_right1[i+1]<<" ";
			diff=max(diff,abs(max_left1[i] - min_right1[i+1]));
		}
	//	cout<<endl;
		for(int i=0;i<n-1;i++)
		{
			//cout<<max_right1[i+1]<<" "<<min_left1[i]<<" ";

			diff=max(diff,abs(max_right1[i+1] - min_left1[i]));
		}
		cout<<diff<<endl;
		
		 
	}
}
