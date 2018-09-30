#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	int n;
	cin>>n;
	vector<ll> a(n+1),ans(n+1);
	ll sum=0;
	ans[0]=0;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		sum+=a[i];
		ans[i]=sum;
	}
	double avg,max_avg=INT_MIN;
	
	for(int i=1;i<=n;i++)
	{
		avg=0;
		for(int j=0+i;j<=n;j++)
		{
			avg=(double)((ans[j]-ans[j-i])/i);
			//cout<<avg<<" "<<endl;
			max_avg=max(max_avg,avg);
		}
		//cout<<endl;
	}
	cout<<max_avg<<endl;
}
