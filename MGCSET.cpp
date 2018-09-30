#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n,m;
		cin>>n>>m;
		ll x;
		ll k=0;
		for(int i=0;i<n;i++)
		{
			cin>>x;
			if(x%m==0)
			k+=1;	
		}
		ll total=0;
		if(k==0)
		total=1;
		else{
			total=1;
		for(int i=1;i<=k;i++)
		{
			total*=2;
		}
	}
		cout<<total-1<<endl;
	}
}

