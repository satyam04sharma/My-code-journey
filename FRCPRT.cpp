#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int x,y;
		cin>>x>>y;
		int a[x][y];
		for(int i=0;i<x;i++)
		{
			for(int j=0;j<y;j++)
			{
				cin>>a[i][j];
			}
		}
		string s,temp="";
		cin>>s;
		for(int i=0;i<s.length();i++)
		{
			if(s[i]=='U')
			{
				for(int j=x-1;j>=1;j++)
				{
					for(int k=0;k<y;k++)
					{
						int g=j;
						if(a[g][k]==1 && a[j-1][k]==0)
						{
							g--;
							while(a[g][k]!=1 && g>0)
							{
								g--;
							}
							a[g][k]=1;
							a[j][k]=0;
						}
					}
				}
			}
			else if(s[i]=='D')
			{
				for(int j=0;j<y;j++)
				{
					int count=0;
					for(int k=0;k<x;k++)
					{
						if(a[j][k]==1)
						count++;
					}
					for(int k=0;k<x;k++)
					{
						if(count>0)
						a[j][k]=1;
						else
						a[j][k]=0;
						count--;
					}
				}
			}
			/*else if(s[i]=='L')
			{
				for(int j=0;j<x;j++)
				{
					for(int k=y-1;k>=1;k++)
					{
						int g=j;
						if(a[g][k]==1 && a[j-1][k]==0)
						{
							g--;
							while(a[g][k]!=1 && g>0)
							{
								g--;
							}
							a[g][k]=1;
							a[j][k]=0;
						}
					}
				}
			}
			else
			{
				
			}*/
		}
		for(int i=0;i<x;i++)
		{
			for(int j=0;j<y;j++)
			{
				cout<<a[i][j]<<" ";
			}
			cout<<endl;
		}
	}
	
}
