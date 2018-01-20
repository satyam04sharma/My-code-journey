#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,i=0,j,t;
	cin>>t;
	while(t--)
	{
	
		cin>>n>>k;
		int a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		k=min(k,n-k);
		
		int count=0,count1=0;
		sort(a,a+n);
		i=0;
		for(i=0;i<k;i++)
		{
			count+=a[i];
		}
		for(i=k;i<n;i++)
		{
			count1+=a[i];
		}
		cout<<abs(count1-count)<<endl;
	}
}
