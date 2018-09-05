#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		vector<int> a,b;
		int x;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>x;
			a.push_back(x);
		}
		for(int i=0;i<n;i++)
		{
			cin>>x;
			b.push_back(x);
		}
		sort(a.begin(),a.end());
		sort(b.begin(),b.end());
		long long sum1=0,sum2=0;
		for(int i=0;i<n-1;i++)
		{
			sum1+=a[i];
			sum2+=b[i];
		}
		if(sum1<sum2)
		{
			cout<<"Alice"<<endl;
		}
		else if(sum2<sum1)
		{
			cout<<"Bob"<<endl;
		}
		else
		{
			cout<<"Draw"<<endl;
		}
	}
}
