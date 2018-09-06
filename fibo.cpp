#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll n;
	cin>>n;
	ll a[61];
	a[0]=0;
	a[1]=1;
	
	
	if(n<=60)
	{
		for(int i=2;i<=60;i++)
		a[i]=a[i-1]+a[i-2];
		cout<<a[n]%10<<endl;
		
	}
	else
	{
		for(int i=2;i<=60;i++)
		a[i]=a[i-1]+a[i-2];
		int x=n%60;
		cout<<a[x]%10<<endl;
	}
}
