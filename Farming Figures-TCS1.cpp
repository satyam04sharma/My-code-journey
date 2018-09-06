#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,x;
	cin>>n;
	vector<int>a(n);
	for(int i=0;i<n;i++)
	cin>>a[i];
	sort(a.begin(),a.end());
	int mx=0,count=0,maxcount=0;
	bool flag=true;
	for(int i=0;i<n-1;i++)
	{
		
		for(int j=i;j<n;j++)
		{
			mx=a[i]+a[i+1];
			if(mx>a[j])
			count++;
			else
			break;
		}
		cout<<count<<endl;
		maxcount=max(maxcount,count);
		count=0;
	}
	//countmax-=2;
	if(maxcount>=3)
	cout<<maxcount;
	else
	cout<<0;
}

