#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		string s;
		cin>>s>>n;
		int count=0;
		if(n%2==0)
		{
			s=s+s;
			int a=0,b=0;
			for(int i=0;i<s.length();i++)
			{
				if(s[i]=='a')
				{
					a++;
				}
				else
				b++;
				if(a>b)
				count++;
			}
			if(n>2)
			count*=n-2;
		}
		else
		{
			if(n==1)
			{
				int a=0,b=0;
				for(int i=0;i<s.length();i++)
				{
					if(s[i]=='a')
					{
						a++;
					}
					else
					b++;
					if(a>b)
					count++;
				}
			}
			else
			{
				s=s+s+s;
				int a=0,b=0;
				for(int i=0;i<s.length();i++)
				{
					if(s[i]=='a')
					{
						a++;
					}
					else
					b++;
					if(a>b)
					count++;
				}
				if(n>3)
				count*=n-3;	
			}
		}
		cout<<count<<endl;
	}
}
