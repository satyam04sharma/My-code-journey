#include <bits/stdc++.h>
using namespace std;
void ans(int x, int n)
{
	long long int l = 1, r = n;
	int lp = 1, rp = n;
	int val[n+1];
	val[1] = 0;
	val[n] = 1;
	if(x==1)
	l = lp = 2;
	if(x==n)
	r = rp = n;
	while(lp+1!=rp)
	{
		if(l<r)
		{
			lp++;
			if(lp==x)
			lp++;
			l += lp;
			val[lp] = 0;
		}
		else
		{
			rp--;
			if(rp==x)
			rp--;
			r += rp;
			val[rp] = 1;
		}
		cout<<l<<" : "<<r<<" | "<<lp<<" : "<<rp<<"\n";
		for(int i = 1; i<n+1; i++)
	{
		if(i==x)
		cout<<"x";
		else
		cout<<val[i];
	}
	cout<<"\n";
	}
	if(l!=r)
		cout<<"impossible";
	else
	for(int i = 1; i<n+1; i++)
	{
		if(i==x)
		cout<<"2";
		else
		cout<<val[i];
	}
	cout<<"\n";
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		int x, n;
		cin>>x>>n;
		ans(x, n);
	}
	return(0);
}
