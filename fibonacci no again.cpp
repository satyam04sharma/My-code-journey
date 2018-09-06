#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll n,m;
	cin>>n;
	cin>>m;
	//cout<<m<<">";
	ll a=0,b=1,c=a+b,no;
	for(ll i=0;i<m*m;i++)
	{
		c = (a+b) % m;
		a = b;
		b = c;
		if(a==0 && b==1)
		{
			no=i+1;
			break;
		}
	}
	//cout<<no<<endl;
	ll r= n % no;
	ll first=0,second=1,third=r;
	for(ll i=1;i<r;i++)
	{
		third=(first+second) % m;
		first=second;
		second=third;
	//cout<<first<<" ";
	}
	//cout<<m<<" ";
	cout<<third%m<<"\n";
}
