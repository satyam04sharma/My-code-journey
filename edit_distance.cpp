#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	string t;
	cin>>s;
	cin>>t;
	int n=s.length();
	int m=t.length();
	int a[n+2][m+2];
	for(int i=0;i<=m;i++)
		{
			a[0][i]=i;
		}
		for(int j=0;j<=n;j++)
			{
				
				a[j][0]=j;
			}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			if(s[i-1]==t[j-1])
			{
				
					a[i][j]=a[i-1][j-1];
			}
			else
			{
				a[i][j]=fmin(a[i][j-1],fmin(a[i-1][j],a[i-1][j-1]))+1;
			}
		}
	}
	/*for(int i=0;i<=m;i++)
		{
		for(int j=0;j<=n;j++)
			{
				
			cout<<a[i][j]<<" ";
			}
			cout<<endl;
		}*/
		
		cout<<a[n][m]<<endl;
}
