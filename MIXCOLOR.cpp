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
		vector<int>a(n);
		map<int,int> m;
		map<int,int>::iterator it;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			if(m[a[i]]==0)
			m[a[i]]++;
			else
			m[a[i]]=1;
		}
		int count=0;
		for(it=m.begin();it!=m.end();it++)
		{
			count++;
		}
		cout<<n-count<<endl;
	}
}
