#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int x[n],h[n];
		for(int i=0;i<n;i++)
		{
			cin>>h[i];
		}
		for(int i=0;i<n;i++)
		{
			cin>>x[i];
		}
		vector<int> dp;
		for(int i=0;i<=1000;i++)
		dp.push_back(1000);
		//cout<<endl;
		dp[0]=0;
		for(int i=0;i<n;i++)
		{
			for(int j=x[i];j<=1000;j++)
			{
				dp[j]=min(dp[j-x[i]]+1,dp[j]);
			}
		}
		long long max_way=0;
		for(int i=0;i<n;i++)
		max_way+=dp[h[i]*2];
		cout<<max_way<<endl;
	}
	
}
