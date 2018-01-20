#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll maxSubArraySum(vector<ll> A, ll size,ll m)
{
    ll max_so_far = A[0], max_ending_here = A[0];
 
    for (ll i = 1; i < size; i++)
    {
        max_ending_here = max(A[i%m],max_ending_here+A[i%m]);
		max_so_far=max(max_so_far,max_ending_here);
    }
    return max_so_far;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long long total=0;
	ll t,n,k,m,m1;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		vector<ll> a;
		vector<ll> b;
		for(ll i=0;i<n;i++)
		{
			cin>>a[i];
		}
		if(n*k>100000)
		{
			m=maxSubArraySum(a,n*2,n);
			m1=maxSubArraySum(a,n*3,n);
			k=k-2;
			cout<<m+(m1-m)*k<<endl;
		}
		else
		{
			for(ll j=0;j<k;j++)
			for(ll i=0;i<n;i++)
			b.push_back(a[i]);
			m=maxSubArraySum(b,n*k,n*k);
			cout<<m<<endl;
		}
		
	}
}
