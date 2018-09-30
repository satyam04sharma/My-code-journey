#include<bits/stdc++.h>
# define pb push_back
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n;
		vector< pair<int,int> >s;
		vector<int> front(n-1);
		vector<int> back(n-1);
		vector< pair<int,int> >::iterator it;
		vector< pair<int,int> >::reverse_iterator at;
		vector<int>::iterator a;
		it=s.begin();
		int count=0;
		for(int i=0;i<n;i++)
		{
			cin>>x;
			if(i==0|| i==n-1)
			{
				count=1;
			}
			else
			{
				count=2;
			}
			s.push_back(make_pair(x,count));
		}
		/*for(it=s.begin();it!=s.end();it++)
		{
			cout<<it->first<<" ";
			cout<<it->second;
			cout<<endl;
		}*/
		long long sum=0;
		int i=0;
		for(it=s.begin()+1;it!=s.end();it++)
		{
			front[i++]=sum;
			sum+=it->first;
		}
		i=0;sum=0;
		for(at=s.rbegin()+1; at!=s.rend();at++)
		{
			back[i++]=sum;
			sum+=at->first;
		}
		/*for(i=0;i<n-1;i++)
		{
			cout<<front[i]<<" ";
		}cout<<endl;
		for(i=0;i<n-1;i++)
		{
			cout<<back[i]<<" ";
		}
		cout<<endl;*/
		for(it=s.begin()+1;it!=s.end();it++)
		{
			for(a=it+1;a!=s.end();i++)
			{
				if(front[i]-front[it]>)
			}
		}
	}
}
