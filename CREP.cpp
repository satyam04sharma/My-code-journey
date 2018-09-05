#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		unordered_map<int,int>a;
		for(int i=0;i<n;i++)
		{
			int x,k;
			cin>>x;
			if(a.find(x) == a.end())
		    {
		        a[x] = 1;
		    }
		    else
		    {
		       a[x]+=1;
		    }
		}
		int count=0;
		bool flag=true;
		for(map<int,int>::iterator it = a.begin(); it != a.end(); it++)
		{
		    if(it->second == k)
		    {
		    	flag=false;
		    	count+=it->first;
			}
		}
		if(flag==true)
		cout<<"-1"<<endl;
		else
		cout<<count<<endl;
	}
}
