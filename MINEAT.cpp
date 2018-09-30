#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		int n,h;
		cin>>n>>h;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		sort(a,a+n);
		int left=0,right=a[n-1];
		int mid;
		long long sum=0;
		int x=40;
		while(x--)
		{
			mid=(left+right)/2;
			sum=0;
			for(int i=0;i<n;i++)
			{
				sum+=ceil(double(a[i])/double(mid));
				if(sum>h)
				break;
			}
			if(sum>h)
			{
				left=mid+1;
			}
			else
			{
				right=mid;
			}
		}
		cout<<mid<<endl;
	}
}
