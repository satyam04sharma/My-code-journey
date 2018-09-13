#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,x,count1=0,count2=0;
		cin>>n;
		vector<int> a,b;
		for(int i=0;i<n;i++)
		{
			cin>>x;
			if(x%2==0)
			{
				count1=1;
				a.push_back(x);
			}
			else
			{
				count2=1;
				b.push_back(x);
			}
		}
		if(count1==1&&count2==1)
		{
			if(b.size()%2==0)
			{
				cout<<"1"<<endl;
			}
			else
			{
				cout<<"2"<<endl;
			}
		}
		else if(count1==0&&count2==1)
		{
			if(b.size()%2==0)
			{
				cout<<"1"<<endl;
			}
			else
			{
				cout<<"2"<<endl;
			}
		}
		else if(count1==1&&count2==0)
		{
			cout<<"1"<<endl;
		}
	
	}
}
