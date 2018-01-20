#include<bits/stdc++.h>
using namespace std;
int f(string s)
{
	int l = s.size(), count = 1;
	for(int i = 0; i<l-1; i++)
	if(s[i]!=s[i+1])
		count++;
	return(count);
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		string a,b;
		cin>>n>>m;
		char c[n+m+1];
		cin>>a>>b;
		int p=0,i=0,j=0;
		c[p++]=a[i++];
		while(p<n+m && i<n && j<m)
		{
			if(c[p-1]==b[j])
			{
				while(c[p-1]==b[j] && p<n+m && j<m)
				{
					c[p++]=b[j++];
				}
			}
			else if(c[p-1]==a[i])
			{
				while(c[p-1]==a[i] && p<n+m && i<n)
				{
					c[p++]=a[i++];
				}
			}
			else
			c[p++]=a[i++];
		}
		while(i<n && p<=n+m)
		{
			c[p++] = a[i++];
		}
		while(j<m && p<=n+m)
		{
			c[p++] = a[i++];
		}
		for(int i = 0; i<n+m; i++)
		cout<<c[i];
		int min = f(c);
		/*p = 0, i = 0, j = 0;
		c[p++] = b[j++];
		while(p<n+m && i<n && j<m)
		{
			if(c[p-1]==a[i])
			while(c[p-1]==a[i] && p<n+m && i<n)
			{
				c[p++] = a[i++];}
			else if(c[p-1]==b[j]){
		
			while(c[p-1]==b[j] && p<n+m && j<m)
				c[p++] = b[j++];}
			else
				c[p++]=b[j++];
		}
		while(j<m)
		c[p++] = b[j++];
		while(i<n)
		c[p++] = a[i++];
		cout<<"\n";
		for(int i = 0; i<n+m; i++)
		cout<<c[i];
		int val = f(c);
		if(val<min)
			min = val;*/
		cout<<"\n"<<min<<"\n";
	}
}
