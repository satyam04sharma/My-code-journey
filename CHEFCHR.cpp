#include<bits/stdc++.h>
using namespace std;
int check(int x,string &s)
{
	string s1="aaaa";
	for(int m=x;m<x+4;m++)
	{
		if(s[m]=='c')
		{
			s1[0]='c';
		}
		else if(s[m]=='h')
		{
			s1[1]='h';
		}
		else if(s[m]=='e')
		{
			s1[2]='e';
		}
		else if(s[m]=='f')
		{
			s1[3]='f';
		}
	}
	
	if(s1=="chef")
	{
	//	cout<<"check1";
		return 1;
	}
	else
	{
	//	cout<<s1;
		return 0;
	}
	
}
int main()
{
	int n,i,j,t,count;
	string str,s;
	cin>>n;
	for(j=0;j<n;j++)
	{
		cin>>s;
		i=0;
		count=0;
		while(i<=s.length())
		{
			if( s[i]=='c' || s[i]== 'h'||s[i]== 'e'||s[i]== 'f')
			{
	//			cout<<"tatti"<<s[i]<<endl;
				t=check(i,s);
				if(t==1)
				{
					count++;
				}
				i++;
			}
			else
			{
				i++;
			}
		}
		if(count==0)
		{
			cout<<"normal"<<"\n";
		}
		else
		cout<<"lovely"<<" "<<count<<"\n";
	}
}
