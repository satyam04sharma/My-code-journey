#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,i,j;
	string str="\0",s;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		for(i=0;i<n;i++)
		{
			cin>>s;
			str+=s;
		}
		cout<<str<<endl;
		int count=0;
		for(i=0;i<n*m-1;i+=2)
		{
			if(str[0]=='R')
			{
				if(str[i]=='G')
				{
					count+=3;
				}
				if(str[i+1]=='R')
				{
					count+=5;
				}
			}
			if(str[0]=='G')
			{
				if(str[i]=='R')
				{
					count+=5;
				}
				if(str[i+1]=='G')
				{
					count+=3;
				}
			}
		}
		cout<<count<<endl;
	}
}
