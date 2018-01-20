#include <bits/stdc++.h>
using namespace std;
int fu(string s,int l)
{
	int  count = 1;
	for(int i = 0; i<l-1; i++)
	if(s[i]!=s[i+1])
	{
		//cout<<endl<<"//"<<s[i]<<"->"<<i;
		count++;
	}
	return(count);
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		int n, m;
		cin>>n>>m;
		char a[n], b[m], c[n+m+1];
		cin>>a>>b;
		int p = 0, i = 0, j = 0;
		c[p++] = a[i++];
		while(p<n+m && i<n && j<m)
		{
			while(c[p-1]==b[j])
				c[p++] = b[j++];
				
				c[p++] = a[i++];
		}
		while(i<n)
		c[p++] = a[i++];
		while(j<m)
		c[p++] = b[j++];
		//for(int i = 0; i<n+m; i++)
		//cout<<c[i];
		int mi = fu(c,n+m);
		p = 0, i = 0, j = 0;
		c[p++] = b[j++];
		while(p<n+m && i<n && j<m)
		{
			while(c[p-1]==a[i])
				c[p++] = a[i++];
				
				c[p++] = b[j++];
		}
		while(i<n)
		c[p++] = a[i++];
		while(j<m)
		c[p++] = b[j++];
		//cout<<"\n";
		//for(int i = 0; i<n+m; i++)
		//cout<<c[i];
		int v = fu(c,n+m);
		if(v<mi)
			cout<<v<<endl;
		else
		cout<<mi<<endl;
	}
}
