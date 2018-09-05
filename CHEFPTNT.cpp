#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m,k,x,i;
		char c;
		cin>>n>>m>>x>>k;
		set<char> s;
		set<char>::iterator it;
		int count_E=0,count_O=0;
		for(i=0;i<k;i++)
		{
			cin>>c;
			s.insert(c);
			if(c=='E')
			count_E++;
			else
			count_O++;
		}
		if(m*x < n)
		{
			cout<<"no"<<"\n";
			continue;
		}
		if(k < n)
		{
			cout<<"no"<<"\n";
			continue;
		}
		long int count=0;
		for(i=1;i<=m;i++)
		{
			for(int j=0;j<x;j++)
			{
				if(i%2==0)
				{
					it=s.find('E');
					if(it!=s.end() && count_E>0)
					{
						count++;
						count_E--;
						//cout<<"-"<<i<<" "<<count;
					}
				}
				else
				{
					it=s.find('O');
					if(it!=s.end() && count_O>0)
					{
						count++;
						count_O--;
						//cout<<"_"<<i<<" "<<count;
					}
				}
			}
		}
		//for (it=s.begin(); it!=s.end(); ++it)
    	//std::cout << "\n" << *it;
		if(count>=n)
		{
			cout<<"yes"<<"\n";
		}
		else
		{
			cout<<"no"<<"\n";
		}
	}
}
